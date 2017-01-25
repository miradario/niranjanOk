using UnityEngine;
using System.Collections;

public class mov : MonoBehaviour {
	private  Animator anim;
	private int lane;

	// Use this for initialization
	void Start () {
		anim = GetComponent <Animator> ();
		lane = 0;
	}
	
	// Update is called once per frame
	void Update () {
		

		if (Input.GetKeyDown (KeyCode.UpArrow)){
			anim.SetBool ("jump", true);
		Invoke ("stopJumping", 0.1f);
		}


		if (Input.GetKeyDown (KeyCode.LeftArrow)){
				if  (lane > -1)
					lane --;
		}


		if (Input.GetKeyDown (KeyCode.RightArrow)){
			if  (lane < 1)
				lane ++;
		}

			Vector3 newPosition = transform.position;
			newPosition.x = lane;
			transform.position = newPosition;
			transform.Rotate (Vector3.up, 0.0f);
			
			if (lane ==0) {
				newPosition.x =0;
			}


	}


	void stopJumping(){
		anim.SetBool ("jump",false);
	}
}
