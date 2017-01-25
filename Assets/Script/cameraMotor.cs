using UnityEngine;
using System.Collections;

public class cameraMotor : MonoBehaviour {

	private Transform LookAt;
	private Vector3 Startoffset;
	private Vector3 moveVector;

	private float transition =  0.0f;
	private float animationDuration = 8.0f;
	private Vector3 animationOffset = new Vector3 (0,6f,0f);


	// Use this for initialization
	void Start () {
		LookAt = GameObject.FindGameObjectWithTag ("Player").transform;
		Startoffset = transform.position - LookAt.position;
	}

	// Update is called once per frame
	void Update () {
		moveVector = LookAt.position + Startoffset;
		// x
		//moveVector.x = 0f;

		//y
		moveVector.y = Mathf.Clamp (moveVector.y, 3,5);

		if (transition >= 1.0f) {
			//transform.position = moveVector;
			//transform.position = new Vector3(transform.position.x,transform.position.y, moveVector.z);
			transform.position = new Vector3(moveVector.x,moveVector.y, moveVector.z);

	//		Panel.SetActive (false);
		} else {
	//		Panel.SetActive (true);
			// Animacion del principio
			transform.position = Vector3.Lerp (moveVector + animationOffset, moveVector, transition );
			transition += Time.deltaTime * 1 / animationDuration;
			transform.LookAt (LookAt.position + Vector3.up);


		}

	}
}

