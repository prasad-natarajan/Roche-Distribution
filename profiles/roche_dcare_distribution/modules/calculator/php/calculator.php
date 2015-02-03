<?php

function calculator(){
	global $language,$base_url;
	$items = NULL;
	$output = theme('calculator', array('items' => $items));
	return $output;
}
	

?>