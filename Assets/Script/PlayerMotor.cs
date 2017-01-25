using UnityEngine;
using System.Collections;

public class PlayerMotor : MonoBehaviour {

	private CharacterController controller;
	private  Animator anim;

	private float verticalVelocity;
	private float gravity = 19.0f;
	private float jumpForce = 13f;


	private string salto;

	private int saltoRan;

	public AudioSource Piso;
	public AudioSource Salto;
    public AudioSource Agacho;

	public int tilt;

    private float Heightoriginal;

	private AudioSource audiosource;

	private Quaternion calibrationQuaternion;


	[System.Serializable]
	public class Boundary {

		public float xmin, xmax, zmin, zmax;
	}

	private float speed = 4.0f;
	public Boundary boundary;


    private void Start()
	{
		controller= GetComponent <CharacterController>();
        Heightoriginal = controller.height;
        anim = GetComponent <Animator> ();
		CalibrateAccelerometer ();

	}


	void FixedUpdate ()
	{



		Vector3 accelerationRaw = Input.acceleration;
		Vector3 aceleration = FixAcceleration (accelerationRaw);


		transform.Translate(aceleration.x  *Time. smoothDeltaTime*10, 0, 0); 


	}

	private void Update()
	{
		
	
		if (controller.isGrounded) 
		{
			verticalVelocity = -gravity * Time.deltaTime;
            if (anim.GetCurrentAnimatorStateInfo(0).IsName("agacho"))
            {
                controller.height = 0.8f;
                
                
            }
            else
            {
                controller.height = Heightoriginal ;
            }
             

            if (saltoRan > 0) {
				Piso.Play ();
				saltoRan = 0;
			}				

			if (Input.GetKeyDown (KeyCode.Space) || 
              ((Input.GetMouseButton(0)) && (Input.mousePosition.y) > Screen.height / 2)
              && (Input.mousePosition.x > Screen.width / 2)
              )
            {
				Salto.Play ();
				saltoRan = Random.Range ((int)1, (int)6);
				salto = "jump " + saltoRan.ToString ();
				verticalVelocity = jumpForce;
				anim.SetBool (salto, true);
				Invoke ("stopJumping", 0.1f);
			}

            if (Input.GetKeyDown(KeyCode.LeftControl)
                ||
              ((Input.GetMouseButton(0)) && (Input.mousePosition.y) > Screen.height / 2)
                && (Input.mousePosition.x < Screen.width / 2))
                {
                if (!anim.GetCurrentAnimatorStateInfo(0).IsName("agacho"))
                {
                    Agacho.Play();
                    anim.SetBool("abajo", true);
                    Invoke("stopAbajo", 0.1f);
                }
                
            }

        }
		else 
		{
				verticalVelocity -= gravity * Time.deltaTime;
		}
		
			Vector3 moveVector = new Vector3 (0, verticalVelocity, 0);
			controller.Move (moveVector * Time.deltaTime);

	}

	public void stopJumping(){
		
		anim.SetBool (salto, false);
	}

    public void stopAbajo()
    {

        anim.SetBool("abajo", false);
    }


	//Used to calibrate the Iput.acceleration input
	void CalibrateAccelerometer () {
		Vector3 accelerationSnapshot = Input.acceleration;
		Quaternion rotateQuaternion = Quaternion.FromToRotation (new Vector3 (0.0f, 0.0f, -1.0f), accelerationSnapshot);
		calibrationQuaternion = Quaternion.Inverse (rotateQuaternion);
	}

	//Get the 'calibrated' value from the Input
	Vector3 FixAcceleration (Vector3 acceleration) {
		Vector3 fixedAcceleration = calibrationQuaternion * acceleration;
		return fixedAcceleration;
	}



}
