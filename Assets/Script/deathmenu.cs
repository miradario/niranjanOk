using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class deathmenu : MonoBehaviour {
	
	public Text scoreText;
	public Image backgroundImg;	
	public GameObject Puntaje;
	public GameObject controles;
	public GameObject scorepanel;


	public float transition = 3.0f;

	public bool isShowed = false;
	// Use this for initialization

//	public Animator anim;

	void Start () {
		gameObject.SetActive (false);
		transition = 0;

//		anim = GetComponent <Animator> ();
//		anim.SetTrigger("MensajeOver");
	}
	
	// Update is called once per frame
	void Update () {
		if (!isShowed)
			return;
		
		transition += Time.deltaTime;
		backgroundImg.color = Color.Lerp (new Color (0, 0, 0,0), Color.green, transition);

	}
	public void ToggleEndScore ( float score){
		gameObject.SetActive (true);
		scoreText.text = ((int)score).ToString (); 
		isShowed = true;
		Puntaje.SetActive(false);
		controles.SetActive(false);
		scorepanel.SetActive(false);
	}
	public void Restart(){
		SceneManager.LoadScene (SceneManager.GetActiveScene ().name);
	}
	public void Mennu () {
		SceneManager.LoadScene ("MainMenu");
	}
}


