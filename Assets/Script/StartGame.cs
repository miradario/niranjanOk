using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

 
public class StartGame : MonoBehaviour {
	// Animation anim; 
	// Use this for initialization




	void Start () {
		//anim = GetComponent<Animation> ();


	}

	// Update is called once per frame
	void Update () {
		
	}

	public void Jugar(string sceneName){


		SceneManager.LoadScene (sceneName);
	}





}
