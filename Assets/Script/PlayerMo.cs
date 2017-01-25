using UnityEngine;
using System.Collections;

public class PlayerMo : MonoBehaviour {
	private  CharacterController controller;
	private Vector3 moveVector;
//	public Animation animation;
	private float speed = 4.0f;
	private float verticalVelocity = 0.0f;
	private float gravity = 100.0f;
	private float animationDuration = 3.0f;
	private bool jumping;
	private float starTime;
	public GameObject coin_ps;
	private Rigidbody body;


	public AudioSource CaidaDopler;

	public AudioSource Piso;
	private float duraSalto;

	public AudioSource[] Choque;

	public AudioSource[] Copado;

	public AudioSource respiracion;
	public AudioSource pasos;

	public AudioSource ujjai;


	public AudioSource music;
	public AudioSource intro;



//	private int lane;


	// si murio
	private bool IsDeath=false;


	// Use this for initialization
	void Start () {
		controller = GetComponent<CharacterController> ();
		//animation = GetComponent <Animation> ();

		starTime = Time.time;
	//	lane = 0;
	}
	
	// Update is called once per frame
	void Update () {
		if (IsDeath)
			return;
		if (Time.time - starTime < animationDuration) {
			controller.Move (Vector3.forward * speed * Time.deltaTime);
			return;
		}

		moveVector = Vector3.zero;

		if (!controller.isGrounded) {
			verticalVelocity = -4f;
		} else {
			verticalVelocity -= gravity * Time.deltaTime;
		
		}
		//x der izq
		moveVector.x = Input.GetAxisRaw ("Horizontal") * speed;

	
		if (Input.GetMouseButton (0)) {
			// derecha
			if (Input.mousePosition.x > Screen.width / 2) {
				if (Input.mousePosition.y < Screen.height / 2) {
					moveVector.x = speed;


				} else { 
//					if (transform.position.y <= 0.084F) { 
//
//						if (GetComponent<cambio> ().elefante == 0) {
//
//
//						}
					//	this.GetComponent<Rigidbody> ().AddForce(new Vector3(0, 10000, 0), ForceMode.Impulse);

						//}
						//this.GetComponent<Rigidbody> ().velocity += 30 * Vector3.up;
//							transform.Translate (Vector3.up * 20 * Time.deltaTime);
							
						
//							Vector3 Motion;
//							Motion = Vector3.zero;
//							controller = gameObject.GetComponent<CharacterController>();
//							//jump
//							if(controller.isGrounded)
//							{
//								Motion.y = 40;
//							}
//
//							Motion.y -= gravity * Time.deltaTime;
//							controller.Move(Motion * Time.deltaTime);
						}


						
					//animation.Stop ();
					//	transform.Translate (Vector3.up * 50 * Time.deltaTime);

			}
			else 
			{
                if (Input.mousePosition.y < Screen.height / 2)
                
                    moveVector.x = -speed;
			//	animation.Play ("run ");

			}
		}

		if (transform.position.y < -3) {
			CaidaDopler.Play ();
			Death ();
		}

		//if(Input.GetKeyDown(KeyCode.Space) )
			//		{
			//   			anim.SetTrigger ("saltar");
			//		}

		//Jump ();

		//y arriba y abajo
		moveVector.y = verticalVelocity;

		//z adelante atras
		moveVector.z = speed ;
		controller.Move (moveVector* Time.deltaTime );
	}

	public void SetSpeed (int modifier)
	{
		speed = 3.0f + modifier;
	//	if (speed > 4)
	//		animation.Play ("run "); 
	//	else
	//		animation.Play ("walk 1"); 
	}


	// cada vez Que choca algo
	private void OnControllerColliderHit(ControllerColliderHit hit)
	{
		body = hit.collider.attachedRigidbody;

		if (body != null && !body.isKinematic)
			body.velocity += controller.velocity;


		// de donde choca, z por delante
		if (hit.gameObject.tag == "Untagged") return;

		if (hit.gameObject.tag == "ganesha") {
			hit.gameObject.SetActive (false);
			GetComponent<cambio>().ChangeModel(2);

			int i;
			i=PlayerPrefs.GetInt ("ganesha")+1;
			PlayerPrefs.SetInt ("ganesha",i);

		}


		if (hit.point.z > transform.position.z + 0.1f	&& (hit.gameObject.tag == "Enemy") && GetComponent<cambio> ().elefante == 0) {
			Choque [Random.Range (0, Choque.Length)].Play ();
			Death ();
		}

		if (hit.gameObject.tag == "Coin") {
			Elemento(hit.gameObject.transform.GetChild(0).name);

			Copado [Random.Range (0, Copado.Length)].Play ();
			hit.gameObject.SetActive (false);
			Instantiate (coin_ps, transform.position, Quaternion.identity);
			GetComponent<PlayerMoney> ().AddMoney (50); 


		}


		if  (hit.gameObject.tag == "meditation") {
			hit.gameObject.SetActive (false);
			GetComponent<Score> ().difficultyLevel-=1; 
			Instantiate (coin_ps, transform.position, Quaternion.identity);
			SetSpeed (GetComponent<Score> ().difficultyLevel);
		}

	}

	private void Death(){

		IsDeath = true;
	//	animation.Stop();
		respiracion.Stop ();
		pasos.Stop ();
		ujjai.Play ();
		music.Stop ();
		intro.Stop ();

		GetComponent<Score> ().OnDeath (); 
	}

	private void Elemento(string tipo)
	{
		int i;
		i=PlayerPrefs.GetInt (tipo)+1;
		PlayerPrefs.SetInt (tipo,i);

	}

}

						

