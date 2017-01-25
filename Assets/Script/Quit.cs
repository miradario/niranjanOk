using UnityEngine;
using System.Collections;

public class Quit : MonoBehaviour {

	public void salir()
	{
		//If we are running in a standalone build of the game
		Application.Quit();
		#if UNITY_STANDALONE
		//Quit the application
		Application.Quit();



		#endif

		//If we are running in the editor
		#if UNITY_EDITOR
		//Stop playing the scene
		UnityEditor.EditorApplication.isPlaying = false;
		#endif
	}
}

