using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.iOS;

public class TileManager : MonoBehaviour {
	public GameObject[]  TilesPrefabs;


	//public GameObject PalmTree;

	private Transform playerTransform;
	private float spawnZ = -6.0f;
	private float TileLength = 7.59f;
	private int amnTilesOnScreen = 7;
	private List<GameObject> activeTiles ;  

	private float safeZone = 15.0f;
	private float easyZone = 100.0f;
	private int lastPrefabIndex = 0;




	// Use this for initialization
	void Start () {



		activeTiles = new List<GameObject> ();
		playerTransform = GameObject.FindGameObjectWithTag ("Player 1").transform;

		for (int i = 0; i < amnTilesOnScreen; i++) {
			if (i < 10)
				SpawnTile (0);
			else
				SpawnTile ();
			
		}

		Screen.sleepTimeout = (int)0f;
		Screen.sleepTimeout = SleepTimeout.NeverSleep;
	}
	
	// Update is called once per frame
	void Update () {


		if (playerTransform.position.z-safeZone > (spawnZ - amnTilesOnScreen * TileLength)) {
			SpawnTile();
			DeleteTile ();

		}


			
	}

	private void DeleteTile (){
		Destroy (activeTiles[0]);

		activeTiles.RemoveAt (0);
	}

	private void SpawnTile( int prefabIndex = -1)
	{
		GameObject go;	
		if (prefabIndex == -1) 
			go = Instantiate (TilesPrefabs [RandomPrefabIndex ()]) as GameObject;
		else
			go = Instantiate (TilesPrefabs [prefabIndex]) as GameObject;

			go.transform.SetParent (transform);
			go.transform.position = Vector3.forward * spawnZ;
			spawnZ += TileLength;
			activeTiles.Add (go);

		int spawnpickup = Random.Range (0, 3);
		if (spawnpickup == 0) {
			go.transform.GetChild (0).gameObject.SetActive (true);
		}

		/*
		GameObject Palm;
		 spawnpickup = Random.Range (0, 8);
		if (spawnpickup == 0) {
			Palm = Instantiate (PalmTree) as GameObject;
			Palm.transform.position = Vector3.forward * spawnZ ;

		}
*/

		}

	private int RandomPrefabIndex(){
		int largo;


		if (TilesPrefabs.Length <= 1) return 0;

		int RandomIndex = lastPrefabIndex;
		while (RandomIndex == lastPrefabIndex) {
			if (playerTransform.position.z < easyZone ){
				largo = 7;
			}
			else{
				largo = TilesPrefabs.Length;
			};

	//		RandomIndex = Random.Range (0, TilesPrefabs.Length);
			RandomIndex = Random.Range (0, largo);

		} 
		lastPrefabIndex = RandomIndex;
		return RandomIndex;
	}

}
