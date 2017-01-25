using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MainMenu : MonoBehaviour {

	public Text highScore;
	public Text karma;

	// Use this for initialization
	void Start () {
		highScore.text = ((int) PlayerPrefs.GetFloat ("Highscore")).ToString();
		karma.text = ((int)PlayerPrefs.GetInt ("karma")).ToString ();



	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void ToGame(){
		SceneManager.LoadScene ("Game");
	}

}
