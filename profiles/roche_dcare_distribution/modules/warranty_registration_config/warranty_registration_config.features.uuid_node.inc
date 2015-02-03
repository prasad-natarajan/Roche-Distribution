<?php
/**
 * @file
 * warranty_registration_config.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function warranty_registration_config_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => '1',
  'title' => 'Accu-chek fastclick product',
  'log' => '',
  'status' => '1',
  'comment' => '2',
  'promote' => '1',
  'sticky' => '0',
  'vuuid' => '80f7db99-0690-4b6c-bbd0-30318986b725',
  'type' => 'product',
  'language' => 'en',
  'created' => '1418733277',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '1c189dfb-7eef-4d85-957a-da1e848dce7c',
  'revision_uid' => '1',
  'field_product_id' => array(
    'und' => array(
      0 => array(
        'value' => 'accu-chek3',
        'format' => NULL,
        'safe_value' => 'accu-chek3',
      ),
    ),
  ),
  'field_product_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Accu-chek fastclick product',
        'format' => NULL,
        'safe_value' => 'Accu-chek fastclick product',
      ),
    ),
  ),
  'field_product_type' => array(
    'und' => array(
      0 => array(
        'value' => 'Accu-chek-Fastclick',
      ),
    ),
  ),
  'field_product_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => '1',
        'filename' => 'images_1.jpg',
        'uri' => 'public://images_1.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => '8320',
        'status' => '1',
        'timestamp' => NULL,
        'uuid' => '528c1a72-b60e-4c66-ba04-a46c947845b5',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => '225',
        'height' => '225',
        'uuid_features_file_data' => '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',
      ),
    ),
  ),
  'field_product_discription' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'machine_name' => FALSE,
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:1:{s:7:"contact";i:0;}',
  'date' => '2014-12-16 18:04:37 +0530',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Accu-chek aviva product',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '1',
  'sticky' => '0',
  'vuuid' => 'b6429746-6d0b-48d3-b43c-4657f848a47c',
  'type' => 'warranty_registration',
  'language' => 'en',
  'created' => '1417079661',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '52083ab7-76be-4f9a-b1eb-57a7db8eaa43',
  'revision_uid' => '1',
  'field_serial_number1' => array(
    'und' => array(
      0 => array(
        'value' => '100',
        'format' => NULL,
        'safe_value' => '100',
      ),
    ),
  ),
  'field_date_meter_acquired_mm_dd_' => array(
    'und' => array(
      0 => array(
        'value' => '2014-01-01T00:00:00',
        'timezone' => 'Asia/Kolkata',
        'timezone_db' => 'Asia/Kolkata',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_first_name1' => array(
    'und' => array(
      0 => array(
        'value' => 'Aviva ',
        'format' => NULL,
        'safe_value' => 'Aviva ',
      ),
    ),
  ),
  'field_last_name1' => array(
    'und' => array(
      0 => array(
        'value' => 'Plus',
        'format' => NULL,
        'safe_value' => 'Plus',
      ),
    ),
  ),
  'field_address_line_1_' => array(
    'und' => array(
      0 => array(
        'value' => 'Btm ',
        'format' => NULL,
        'safe_value' => 'Btm ',
      ),
    ),
  ),
  'field_address_line' => array(
    'und' => array(
      0 => array(
        'value' => 'Axa Building',
        'format' => NULL,
        'safe_value' => 'Axa Building',
      ),
    ),
  ),
  'field_city' => array(
    'und' => array(
      0 => array(
        'value' => 'Bangalore',
        'format' => NULL,
        'safe_value' => 'Bangalore',
      ),
    ),
  ),
  'field_zip_code' => array(
    'und' => array(
      0 => array(
        'value' => '560068',
        'format' => NULL,
        'safe_value' => '560068',
      ),
    ),
  ),
  'field_telephone' => array(
    'und' => array(
      0 => array(
        'value' => '9738993020',
        'format' => NULL,
        'safe_value' => '9738993020',
      ),
    ),
  ),
  'field_e_mail' => array(
    'und' => array(
      0 => array(
        'value' => 'suk@gmail.com',
        'format' => NULL,
        'safe_value' => 'suk@gmail.com',
      ),
    ),
  ),
  'field_gender' => array(
    'und' => array(
      0 => array(
        'value' => 'Male',
      ),
    ),
  ),
  'field_when_were_you_diagnosed_wi' => array(
    'und' => array(
      0 => array(
        'value' => '2014-01-01T00:00:00',
        'timezone' => 'Asia/Kolkata',
        'timezone_db' => 'Asia/Kolkata',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_what_medication_do_you_tak' => array(
    'und' => array(
      0 => array(
        'value' => 'Other Diabetes Medication',
      ),
    ),
  ),
  'field_how_often_do_you_test_your' => array(
    'und' => array(
      0 => array(
        'value' => 'once a day',
      ),
    ),
  ),
  'field_what_blood_glucose_meter_d' => array(
    'und' => array(
      0 => array(
        'value' => 'Aviva',
      ),
    ),
  ),
  'field_what_type_of_primary_healt' => array(
    'und' => array(
      0 => array(
        'value' => 'Medicare',
      ),
    ),
  ),
  'field_state' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'block' => '0',
    'allow_draft' => '0',
    'auto_save' => '0',
    'submit_notice' => '1',
    'submit_text' => '',
    'next_serial' => 1,
    'submit_limit' => '-1',
    'submit_interval' => '-1',
    'total_submit_limit' => '-1',
    'total_submit_interval' => '-1',
    'progressbar_page_number' => '0',
    'progressbar_percent' => '0',
    'progressbar_bar' => '1',
    'progressbar_pagebreak_labels' => '1',
    'progressbar_include_confirmation' => '1',
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'status' => '1',
    'record_exists' => FALSE,
    'roles' => array(
      0 => '1',
      1 => '2',
    ),
    'emails' => array(),
    'components' => array(),
    'conditionals' => array(),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'machine_name' => FALSE,
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:1:{s:7:"contact";i:0;}',
  'date' => '2014-11-27 14:44:21 +0530',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Accu-chek Aviva product',
  'log' => '',
  'status' => '1',
  'comment' => '2',
  'promote' => '1',
  'sticky' => '0',
  'vuuid' => 'c6470859-7001-4258-a4ea-a852ccace1e8',
  'type' => 'product',
  'language' => 'en',
  'created' => '1418713806',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '632c15d1-99e6-4efc-8a15-ba06d508e1bc',
  'revision_uid' => '1',
  'field_product_id' => array(
    'und' => array(
      0 => array(
        'value' => 'accu-chek-2',
        'format' => NULL,
        'safe_value' => 'accu-chek-2',
      ),
    ),
  ),
  'field_product_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Accu-chek Aviva product',
        'format' => NULL,
        'safe_value' => 'Accu-chek Aviva product',
      ),
    ),
  ),
  'field_product_type' => array(
    'und' => array(
      0 => array(
        'value' => 'Accu-chek-Nano',
      ),
    ),
  ),
  'field_product_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => '1',
        'filename' => 'download.jpg',
        'uri' => 'public://download_0.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => '14643',
        'status' => '1',
        'timestamp' => NULL,
        'uuid' => '112ce884-0463-446c-a523-1871f1013ac1',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => '219',
        'height' => '231',
        'uuid_features_file_data' => '/9j/4AAQSkZJRgABAQAAAQABAAD/2wCEAAkGBxQSEhUUExQWFhUVFRcXFhgWFRUXGBcYGBUXFxYXFhgYHSggGBolHBYXITEhJSkrLi4uFx8zODUsNygtLisBCgoKDg0OGxAQGywkICQsLCwtLSwsLCwsLCwsLCwsLCwsLCwsLC0sLCwsLCwsLCwsLCwsLCwsLCwsLCwsLCwsLP/AABEIAOcA2wMBEQACEQEDEQH/xAAcAAABBQEBAQAAAAAAAAAAAAAFAQIDBAYABwj/xABAEAACAQIEBAMFBgQEBgMBAAABAhEAAwQSITEFQVFhEyJxBjKBkaFCUrHB0fAUI2LhBzNy8RVTc4KSskNjwiT/xAAbAQABBQEBAAAAAAAAAAAAAAACAAEDBAUGB//EADgRAAIBAgQCCAUFAAIBBQAAAAABAgMRBBIhMUFRBRMiYXGBofAykbHB0RQjQuHxBjMVQ2KissL/2gAMAwEAAhEDEQA/APcaQjqQhKQhaQjqQjqQipi8eibmT0H70oZSSDjByAuO4uzEhTlHbf4moZVG9izCiluDHv8AWo7ktiO5iAKVxJFHE4/pTZiWMAbcxOutMTETYwCnGuWeHYzO4UayY+NJIim9LnqeGt5EVegAq4lZGVJ3dxxur1HzFFZg3QgvL94fMUrMV0PDA0w4tIR1IR1IR1IR1IR1IR1IR1IR1IR1IR1IR1IQlIR1IRBicWqbnXoN6FySCjByAuL4qx2OUdv1qGVRssQpJAm7fqNsnSKr4odaa4VijiMcKa4SQPxOP70waQNvY+kkHcFY3jYUb0aQDlYBnit684W2CZ2jUn0HTuYFTQoSm7IqVsZCmrtmx9msPdw5Fy5cAcbAQ0dySN/StSh0alrLUwsT0w3pHRGmXjtw/wDMeeZJj5Vc/SwXJGd+vm9k2RNxxgYYEUawyexG8dJfEhBx71p/0wyx5ascfjmRUcsKSwx4XwftKfvT61XnhEXKeOvxDuE40j76H6VUnh5RLsMRGQTVgRI2qAsC0hHUhHUhHUhHUhHUhHUhCRSEdSEV8RjETc69BvQuaQUYN7AnFcXY6L5R9fnUUqrexPGiluC7l+omyZIoYnFRTNhpAvFY3fWhCQLu4+edILQGYrHwTrpuKewrgzE8T70VhZgDjuMk+VdTRxhcinVSLfBOBXMR53OVOsb/AOgHf1IjpNaOGwLn2paL6mJjek1Dsw1fovH8HpXAPZcKvlXw1O5+23ck1oZ6dFZYL39zKVKtiHmqP39g4cLh7AkxI5t/eo+sqVNCfqqNFXfqBuI+0yjS0J7nQfCrFPCy3kUq3SEFpTVzOXcWzEkmSauxioqyMepOU3dsRbtGR6lnD3QdzFA+4lpu+jYbwPDc+oYVVnWy7o06WFzapltsNdtajzDtvQZ4T7iZ061LvQQ4Xxwqd/UGoauGTLFDGNGswHE1udj0/Ss6pRlA1adaMy9FREx1IR1IR1IQlOMLSEQYvFrbEsfQczQSkkHGLlsAcXxV25wOg/WoJVGyzGkkUWuUBLYguXKa4WUr3LvWmFYFcQu0rDoCYrE6U9hAi9iIp7CzATiuN0mdqJIFyAt7FltB8TyHcmpFEhlUsaD2X9ngw8W6Dk3Ckav0LDp0X4mtfCYPTPNeC+7Oe6Q6Rd3Cm/F/Zd56nwXhoUC5dEaSq8lHU96sVq1+xAq4XD2/cqeS5f2Q8Z9qcsra1PXlSo4W+shsT0go9mG5k8Ti2uGXYk96vxgo7GPOpObvJ3IQaIjFmkIFYi7euYoYeyGJyBsqe80kzryAiqeKxUKF5VZKMUtWzXwWDjUpKWXM27B7G8Ju4W14t3VQQtzJeDtbYxAdWA11Gx51l4Lp6hi63VUnK7V45otKSW7Xd4l+v0XThDNKK77PYfwzHEmbNyT93Zv/AAO/wmth1E9Ki8zP/RTi82Hn5M0vDfaGfLcEHry/tUE8PpeDDpY1p5KqswliMEtzzDRuo/etRwquOjLFShGpqtyrh8S9psradDUsoRmroghVnTlaRseD8WDgKx15H9azK1DK7o2aFfOrMMVWLJ1IR1IQlOI6kIyWKvs7ZmP9vSqkndl+MVFWRUdqAkQw3aa4VhppWE2VMWmhjcfuKVhrgDGYoU6GbAGPxAorA3AOMxHenGuBcbenSjiiOcgx7KcG8Y5m/wAtDr/Uw/8AyI+J9K08Fh83bltw72YfSOMcf2oPV7vkvyz0vg+HX/NfS2nuA8z1NaVab+BbvcyMLTi31svhW35KPGuPNdJVTCfjR0aCgrvcixOMlU7MdEBJqyUTqQhC0U1x7XFW4KVxnFoE8fw7DJiLUh7W+UkEod4I1kb/ADqDEU1JXavzT4o0ejq+Vuk3a+z5P+zWeyvtcl60ExDWx4ShluXBnzIIDqVJ810roD3268X0p0JKnU6/BqTzuzjF5bN7PMlpFPVrnxOkw+LuslWyceL97jPaP2L8xuYNWgAMVnSTBUWW3dokwNB15VL0X/yRWVPGyV7tJ8dN3NfxV9E3ZvlxAxPR93mo+/AD4TjZBNvFK3lOXPEXEI5OPtD6+tdXCzSnSej5bMzKijUWSsvyjTYLiD2cpDB7Te6w1BHbp6U7UKvcynJVcI7/ABQ5mnRkxCSN/qKq9qlIvdivC6KeHutbfK3wqeSU1dFaEpU5ZWbfg3EPEWCdR9ayq1LK7m3Qq51qE6gLAhpCOinGOikIxNxulUjRK7XIOtMPYYxA5UmOmxjtO1IWpTxVyBNIRkeOvMlTB/GnSBMs+On1ohHcP4RexdwW7CF2PTl3J2A7mnWoEnbcj4jwdFxCYa1c8S6MwvMo8iQYYIx94jUZtpbSYmrWHoOpNRKGMxSpU3P5d7Nrh8KEVLKCBAnsK6GCUY6bLY5GpmnPJfWWrfvgP4nj5Hhpoi6Dv3NPTp27T3Gr1rrJHZAypisJTiHKKQ1yDit0W7cxLMYRepGrHsoG57gc6rYnERpR5vkXMFhJ15XvZLiDcJjc3Y8xUVHERqbFjEYSVJ67cwhbxHWrSkUZU+QE4jw82ibloTbOroN16svbtUUo5HmjsaWHxCqpU6nxcHz7mFfZz2oeyCAzPZdcpXO6lVnXwmBm23pWX0h0TQxqU1ZTTunZNN8My/kl3+Rfo4qpQeWW3vY29z+Gx4tsMOLrXRluslxUuYaNVzA6uBJljvHOYrk4/rOi5Tg6zhGGsU4uUavOzWkeSgtvU031WJSaje++usfyZrFWrnDboRibuHuidoV9BJt6mGEjXn6Gus6N6Rh0jSzxWWcd431jyv4/0Ztei8PLK+1FhzBYvwWV0bNafVT25gjkR0rT0rRs/iRkzi8JNSi7wfoaTHMt20Li8tf1qCleEsrLdfLUp50ScGxpBBnUU1encfC1mjdYe6HUEc6yJKzsbcXdXJaYI6kI6kIwTzVI0dBhekJDCwpBWIn2pDtg/iLjKacEwfEcRqRO1OC2aX/D32D/AIp/GxCHwADAMqbhjlGsDee1SQhfVkVSplVluX/8S/aG3wxBgcAq2ndc95195E+yM2+ZtdeQHepNFoivdvVmM9kcBkQ3XHmfzHsv2V/P41t4Oh1cL8X9DmcfiVVq2/jH1fvQLtfIBPNtPQc/n+VXsu3cZed2b4v6FQmjAEpCFApxiUQoLMYVRLHfToBzYmABzJFBUqRpxcmSUKMq01CJXuYMvN24MpIgKTpaQe6k9dZY82J7Vz1aq6knJnWUacaUVCOyBOO4bGo9QRUKk07onaUlZlezjCulz5/rWlQxt9J/MycT0e12qfyCVq7zFaUZGTKHBlHGcJDEvZIRzup9xvX7p70EqfGJZpYuyyVdVz4op2Mc1pobNaeIIOzA7idmU8wdDUc8lRZai/3mu/k+Bdimu3Sd13fdHo/CPa63iVSziFthiSGzKq22T7IVjIQAaERroQQdK4zGdAVcHOdfCyla11ZtyUuLaVszfB3stnFrU1aONhVShUtf0/oXF4CzhYsJcUq9vOFZ5fPBYXAmXyKQIgnkO86vQ3SeJxblOrBpptXS7Kto45r9prfRWIMXhaSh1aejXPW/MdwTiEAofdYaflXSVad7SRzWFrON6UghgLsNQ1I3RLQlaRu/Z7EyMtZGJhZ3Ohws7qwbqqWzqQjqQjAJfqlc0LD5B3FOK1hj2Aef7/OnsPmZTuIdQdqawu8BcTuEba+lOK5m/BAvG5pI11iM2gH1pMaJvOA/4isvkxESo3OhgCdx+NFCrJaMCph47xPLeJ4gcS4hevgHw2uZyG3ygBbaH1CyR0FaWDodbUu9kYvSWK6ilaL1e35NNcMKF+J/Kt2K1uctN2iorzKrtRkY2kIVRTjMmtWySABJOgFPtqMrt2QiJ4riP8q03lPK7cGhud0XUL3zN0rCxeI62WmyOnwWF6iFn8T3/ASuYcMuVttO3prVByL0dCr/AACJbidFGpY/MnpQXCuZ3jGEhc65WUSW1G3VW206USCQMUvbgrqp1g/l0qzRxMqem6KuIwkKuuzCOExYYSD6jmK16VaM1eLMKtQlTdpItsFuDLcUMOhE/wC1T6SVmV0503mg7MpXPZ4b2rjJ2PnX5HX60PU2+F2LMekXtUin37Mk/wCF33K+LfzACJCnNl+7mJ2jTtUdPDZNrJb6L358w6nSUJLSLv3v+g9YMRHLarljGbd7hrBXZ1qKSLVKebU2PAsRBBrMxENDfwk9UbEGsw1RRSHFpCPOiKpGimIppDj2aiFYivNpNIQBx+5704zMzxXDkL/3D4701hIpYom5bhR/NGieh3zdgJPwqWjSdSSityHEV40abm9i9wPhq2UC7n3nb7x5mumo0VShlRwuIxLxFVzltw7i3ePPmdfhU65FWXN8SCiGOinsMSotOA2Lip/yUJDuAbrDQ27TbKDyuP8ARZOkiszHYn/04+ZudG4Oy66fkTYi54NsFUkLEgfZUDkB20rIbNuMS/baQDBEjYxI7GKiY4N4uJy6Z1Q5ntqRJH2Wy/aAIJiRPekgkQYvAWQC7SqSGZdlLciU667DcxSTYrsG8S4a2V7jPk5qBqAOQYfaY8/hFOmOnwBd3BMAGAKtE+nY9akhUlB3iDUpxmssldD8Nj9cr6N15H06elatDFqej0Zi4nAyhrHVBfC3+VaEZGVUpl0GpCsSJTgsN8EtZzA6H8KirSsrlrBwzuxo+Cv5oqnXWhq4WWtjdYV/Iv8ApFY7WpvXJAKYQs0hXPNWeqJp2HK9IIerUSEyC8+hpxMzvEb1OA2BeL4gC03XQ/UU1hCcKwxyZju30HKt3o6jljne7OX6axLm+rjsvqFLdrTXYCWPbkPU1ptmFGGlntu/feVLzljNGlbQilLM7saBTgj0SnSGbJL93wkD5QzscllDs7xMt/Qo8zdoHOq2LxCpRst2Xej8I6880vhXqS8NwmQaks7Es7nd3O7H9OQAFc/KR067i9UTYaGsaEQL4ima5byD+YDJcGMiAgkNHvTyU7/CnQS2E4jbTMoGVLhYOpZJRmUQFY/ejbnppSQkWbNh3bNdgKAMqA5hm0JcmNTO3SJ50vAY7GYIEUSFcyfHMKqKWOw5dTyA7mjSHUi1wnCMltQ5ltzzidQs84Glb2GpyjTWbc5jGVYzqvJsFlq2ZzJbYpwGbH2QtIdmBeNuY+e9UMXKXLQ2ejYQto9S9g7eW+w7n8ZoJu9NMnpRy1mjccPcFBBBjT61jyerN5KyRYYTTCaIDZ7CjzAZTzc1nmuORpBpCHtciiQzRRxV7SnQ1zK8Rv6mjAbAIzXnCqpYAgt6bxU+GoupNcipi8QqUHrrwNPhPNoN9o5z0ro0kkcZJucrvcn4iwUC2DJ3Y9W/QU9O7eYCvaCVNeL8QdFTFUUCnEaP2d4fbIz3s2XXLoYJ9eZ3qvXqSXZgXcHRpy7dXbhyM1wvGfxVx7xGUqTbS1sbCK3ukcnYjMx56DlWHVqynK8jpKdKNOKjHYu43AZyrK5UqRtG06x0JGlVrk0dC1euhFLMYAEknkBvQiKgxoyB2/lhjC5u/uk9J3imsPYo20ZCloHIzszM7FSzwRqB946aRAFP3j7k1zDXnHhPlKk63NMxXeMuweee3OlpuLTcLAU6QIPuWMt03M2hBkGBroNwNVgbHb8JIoFsBW2/iLnjEfy0JFgfeOxvEfRfia0cHh87zy2W3iZuPxPVx6qO737i8orWMFslWiI2ekYfg1prK5ACIHrrqday3WnGbudDHDUpU0kjN8V4a2HcMhIG6kHUGr1GoqkbSMjFYZ4eeaGgY4NxDxCbj+8q+bvHP6VXrU8iyrYvYSu6vblvbUbwTjzIZB33HX1rm5zak2dqqKcEmb7h/EVurm2PMVNCWbYo1YOm9SQ3R1NS5WQZkedEVQNa5HtNMORXrveiGAvEMX360aQDZk+K4sk5V1JMCpIxcnlRDUmoJyewX4LgsijruT3rocPRVKFjj8ZipYipfgjS3uEI1sM5yOfdIMEdDyn0PzpdbeVlsF1CUM0tGZ7F2ntNFzUHZxsfXoaswmUKtJ3ujhUpVFFIRofZ3iQA8G57jHQ/dJ/I1Wr0n8cd0XsFiEv2p7PbuZH7RezGZ/FVjavD3byjcclvLs6/UfSqVSjCsrrRmrTrTw7yy1j9ALhuKMriziV8K8fd1m3dA+1ac7/6dxWVUpSg7M1ITjNZou6G8VZwZ3UQESYD3G0m4fuDpz+VRoNDbpvgFWRLoYaEeUTAkOrE+WZ1HypaC0K9qTbyeF4tu3ALbEkEybS9FMAayeVOOHbFwMoZToRI9KawDKVniquxTK6tqRmUiQOeo03G/UdRUkYjPYFcWu+MxsKfKIN9gdlO1of1Nz6CatUKLqyy8OJWxFdUYZ3vwHgAQAAABAA2AGwHat2MVFWRzM5OTcnuPUURGyVacFms9msc4XykyvyI5fGquIhF7mjgqsktOBosQ6Yi2VIhomOcjb1FVIqVKV+BpTca8HHiZPEv4Nm8diQFHqTFT4qdqebuKvR1K9bLza/sGYG/tXLTO+gjYcGxxWINNCbi7oCtRU1Zm2w99GUHTUdBV9TzK6MWVPI8rR55ZuStUkaZDiLsfX9/WkEgdi8RFEkA2ZjiuNCgkmpEiKTKHB+HNccXGbKfsjl8e9a+Dwtu2znekcepPqomswV0WmUX1KjcGPK0VoTu1aJk0rRknNDuJ403CZ25AbRR0qaiR4ms57la3iSBB8y9DtHSpXFMrRqyQ29kmUXKPuzIHoTrHrSimtGKrOMndKxHRkQ5TSGZquA8bDAWrx7Kx/8AVv1qlXoNPPA1sHjFJdVV8n9h/HeAJdQo6B0OuU8j95CNVPcVBeFVZZlzLOjLNT+RiMbh7uFUi6DicLEFyJu2h/8Aav21H3hrp6VnV8JKnqtjQw+KhV02lyJcRBsL4TM1oxmKHOxt84JM9juYqoty0tyS5fW8Ciki0qgvcByiNDkBP9O50gGlYWwSACqABAAgAbAcqJIBsD8ZxxWFtgG9clbYPzLN/Qu5qaEW2kt2BKSScpbIq4bDi2uUGdSWY7ux95j6/QQK36FFUoW48TmsViHWnme3AlAqYqtkgFOCx6CnBZt/ZXCwnmE5t6zsTPtaG3gKVoa8S/i8MFfLOu6kbj1oITbVyWpTSla+pkPay9qtrmSXf4aL+JqtjqnYUUaHRNB9Y5vh9Sjg1rDkdRTNRwzlQBtmktzA1qVFRpXMcl+JpIaxTxWIpx9gJj8XUiRDJmatP/EXss+VdSOpq7g6PWT1MrpHEulT04mw4faAgbfkK3notDk4dqWvEKYniKFcjIGTaOfSfXvvUUaUt7lqpiYLS10D7vDwAXstntjdSRnT1G5HcVJGbTyyK9SjGUXOm/yVBU5THU4wopxhYpCFFOMaDg3tAUAS75k5Hmv6iqlbDKXajuaWFx7h2Kmq58UHb+FS4oe2w7MPzqrGbi8sjRnSjUWeD8zFcS9nHsubuFi2xMvaOlm73H/KfuNKgrYSM1mp/ImpYyUOzW+ZVt4i3iVa1cU27i6tafR1I2YcnXmGEg1muLi7M0VJWutURtdNhLjXXGRfdgRAgDYySxaeZkmjS4jN3ehTwtlpa7cH824NR/y0mVtDvzbv6Vs4LD5VnluzB6QxeZ9VDZerJ4q8ZdxYpxgpwDApeuFHbLKnKf6tI/Ooqs3CN0T4alGrPLJ209SXjHBLmGb7y/Zbke3Y01Ksqiutx8RhJUpWe3BhnhHHVyZVUi4NIOoHfvVedC8rt6F+likoWitQzgLR1ZjJOrE/OoqslstizQpt6vdmHxitdus5GhOnpWLiK2ebaOmwlDq4JPxLOFwpB2qmzRiabg2AZiP9qeEHJ2RHWqxgrs1NvDoBB1jvFaMaCSsYc8TJybR5Xi7kTVGxrXBGIxlEkC2Z/imJLEIvvNp6dTU1Km5ySRVrVVCLkwvwnhltVAIjbzc/U10VGioR0RxuIxTq1Hd6BfHYC5ZGafEtH7S7r0zj8xpRQqq9mDVwzSvHb375FMPNTlJoXNTjHA04zHCnGHg0gRacYUU4haQxZwOPuWjKNHUbg+o51HOnGatJE1GvUpO8HY0GF47auDLdXKTz1K/qtVZYecNYa/U06eNpVOzUVvoU+NeziYhQw82WfDuWzFy2eqkbjtqO1Q1IQq6T0ZZpSqUe1Td48gJw32cuvc8TE3UezhjmAAIa4+WVa6uwjoDE1WWGcJpS8i1+rjUptw0tvfhoVW1raOauNikMKBTiCXB7LZ1Ycj8+1R1GlHUlw8ZSmmuBsLrlVyXBntN194dp61RiszvHRmvJuCyz1iwLf4aA8o2o1VhzHQ96nztrUrKmoy0fgza8Lw5KgwNhM7T/AGrMqzTdjapRajfiOfhVoyzZT8QBPTQa1E4Rlpl9CWFSpHXO/n/Q9OFWeSAd/MfxqLqKfIn/AFVVr4vfyLtpkTQKfgKNU9NLIilVbfaux2cH7B+MT+NFrzBun/E8Px2J0NZyNlsBYnEwCTRIFsrcGQlzcdSJ909q18DRt2mjnOlcRmWSLNJm+Va6ObdyfB497Z8p05g7GdDpTSgpbktOrKnsNxT2yQbalZ95dMoP9PamhFrcerKM7OKtzIJoyEcDSGHA0QI8U4w4GlcZpjqcEWnGOpCOpCJ8JjXtGUYr1jY+o50E4RmrSRLSrTpO8HYTF417hYk+9GaNAY6imjCMUkuAUq05ttvfcpkUQJP/AAFzw/FCnJMT6UGeObLxJOqnkz20IsOoLAbU9wcrbsaPC3ktDSGeNByHrVaUZTeuiNCFSnSVlqx1q+S0uT8KdpJWQ8JOUryYVwF2znAP12HrFUcRWcFZs1MLhlU7UVexqkuArpBUbGZH46/jVVW3RblfaSFRjOgjlMD9ina0AT10LNuyTzA7zJ/tQOSRKotld0YGCZ6Qd+saTRpp6ojaa0ZGcMvMgHoXIPyos7A6uPF+p4Lir9ZZusDuDdcLy3PpU+Hp55pFTF1lSpuRp8FCASARzH72rpIwsrI4qdVynmYQbha3AXwxkjVrLHzdynX0oM7g+0WeqhVV4b8uIMDVOncpONhZpxhaQw6aQwoNONYh4jxFcPbNx9eSL95unp1qticQqUe8vYHBuvPXZGBwftBet3WuZs2cksDsZ/CseniZwlmTOir4OlVhka8HyPQ+F4zxrS3MpXMJg/j6Vv0KvWwUrWOSxVDqajp3vYtipisLSGOpCEpDiGmEJFIe5rvZLGfy2tsMyqZ25Nv9fxqhiqfaUlxNno6tem4NXS+5T9qOB21Hi2iADuvQ9V7dqehVlLsyBxeGjBZ4bcjKf8cW0CGiR9amnUjH4mVqVCcv+tbkuBxF6+ZJKJyA94jueVY+I6Sb0pq3edRgehUkpVnd8uBreEYUDYR35n1NZM6jk7s340YwjZLQ0mGdreoMTvTwm4O5BVpKorepfe8xAjWe4VvhH7FalNwmsyMKtGcG4vcfdsNAOZh6bz8SRHrrpSUorgNKEmr3fv0JLYI94k9zA+ggAUnZ7DxutWyXxFOpK/SgsyTR6nzdjbtZ6Nhi8GwzavEz84FbHR9JpZ+ZznS9eLfV3DQuA7VqpnPuLQ5LpBBBII2I0I+NPuJXWw7E4lrjZmMsdzzPc9T3popRVkFOTm7sjBogBZpCsdNONYcCACSYUCWPQDnQzmoK7JKdKVSSjE899o+LnEXCRoi6IOw5+p3rn69V1J5jrcNQVGmoom9luD+PczMP5aHX+o8l/X+9SYTD9bPXZb/ggx+L/T09Pie35PRUNdAlbRHISbbux4NEAOFOMdSGJUskqxH2RJHMjmR1ihlKxJCnmTtwIFIO1PcFposYTDG4wVRqaGc1FXYVKnKpLLE05urhEyJBuHVj00/GqSi6zzS2NhzjhYZIfFxMr7ScfOQ5o0+FTPLSVyqpVMTLKZDhdjxX8Vhz8o/OsDFYjPI7Ho/BqlFN7m34eAIrObNuETS8NoQprQM4gQY5b0bVirHVXLfD7kHWB3mI/X0q1hW3eJnY9JZZ+VwthbBY5mMjkIif0qzOSSsinCDk8zZYvYVCIZdKCM5LZkkqcGrNDP4NO/8A5Gn6yYPVQPlnGkkx1MfOqcVd2NObsrmhwa5QI5CumoxywSOGxc89VyCoWzfHKzdGzf8Axv2b7h77UmpRd1qFGVOorPR+j/AOuIykqwgj9yOoqWLuQTg4sbNEALNIR00hDl1p7jGa9seLwP4dD/1COZ+76CsbGYjO8q2Oj6OwnVRzy3ZmeG4Jr1wIu53PIDmTVSnBzkoov1akacHOWyPSsBhVtIqIIA+p5k9zXQ0aUacFFHIYmvKvUc5f4WgamKrJAaIFocKQI6nGJLbkGRoaZq4lJp3RY/gfFGZBlfn9096hcsj1LkIdbG6QU4ViBZUhli/yB2j7wPMfpUNSLqP/ANpboSjQi0l2/epR4jigqsWMsdyakXoQy2fGTPM+O4w3bgUe5Op6nmP31rJx2Ju8qOh6KwORKUg9wxIArHkzpoRsaLBPUMmW4I13AVmKUNwK70DeN94elTT3KVPZkTMVGaYUHU+We2Wec1dwELtsyulqmVRV7cXt5WvxLlrizqNBKgAyxJOpgbDcjWO1W3Ri/Ez44qUdtvf1LzcRVvtRprP737VF1TXAsOvF8QfcsWyTOJcHpnXTttUylJfxRVlCm3d1H8z52TW4o/q/vWbQV6iN3Eu1NmgGldJHY4mqu0ziaNEQr3iYBJMCBJ2HQU4TbYyaQws04rCikMUuO8WGGt6f5rjyD7o+9VHG4jIskd2anRuEzvrJbLY89JLGdyT8STWOdAb/ANnuFixb1/zGgv26KPT8a2sHh+rjmluzmukcX1sskfhXqwwpq+ZbJFpwGPFOCSLTgssYayH0kBjGWdj1BPKhlK2odOCm7Xs+HIWzbOfKwggwQd6Tmst0OqMlPKzWcLwy21ztsNf9qz6snN5UblCnGnHMzPe03EUyszQp3EcjViC6uN2yjVl107JatmX4bYuYk5r+06KDoR1br6ViYrGzn2Vojquj+i6dPtyV33mhf2Qs3bZhArRoVEEH4VlybNzLFAbA4Mr5Tupg0FyZJB7h+DJNBuHexr+FWvDEncbDr/apaatqyrWlm0RZEkzzNFq2R6JF65w1yAYy5QfebRjG+UTEdd61cO4045Xq+457GRnXm5rRLa737yml/wAJSrqHfYazAOm55nerTjnd4uyKEZ9TG01d7eX97kicIki4QqMpOUN/blQuvbs7hrCXaqaJrb2ipc4ezEnIxknUGR3gyJ9YqVVYpWuQSozk28rfh/p4Lhz/ADV9fyNZGH/7EdLiv+uRoWOldBB6HI1o6kJepLkOU4NT3FYcDSGsKKcY6/iFtIbj+6vL7x5AVDXrKlG7LGGw0q87LbieecSxzXrjXH3J26DkBWFKTk7s6iEFCKitkH/ZPhH/AM7j/pg/+/6fOruCw+Z55bIzOkcXkXVwer37kaxa2TnWPFIFkgpwWPFECyVaQBLaWTTtjJNvQ0WFwAvqA/vDZhow+P7HpvVKdTI7o2aVHrY2lvzI8ZimVMjsCEmCBGbu3enhFXuuIFWcsuVvb1PPuK4o4i/l+wh17nkKo9IYi37cTW6Fwd/3pGi4aQIrCmzr6UDWcLuTAqNEk46DsdwVfFzRuAf7U8o6leM3l0JbCqr5bSXG+9IAA5bjvWoujFlz5/AwJdPyz9X1TbWj4dwSa4oIBdRrBjkYnQ/a+FBHATZJPpelG35938iOzxFpJspmWPfInlOnf9zVyGCpU0sz7Rl1elq9Zvq43hz9/wCFDG43EXNTeAEnKsROXc6nVRG/UVchTpx0ymXWxFeazZ7b2W22/kuL5j3ui1BglxrJVxJO5Tpy3j9Uln04eXqPKaoLNbtb6p8d7DhdR5e8XcmAERyIPMyG29ehocso9mFl3kinCousq3fJJvTns9v7LlziFhTlK3GjmHKg+gB0FAqNVq90ieWKw8Hlak/No8Dt2oYHvWLSlaaZ1FaOaDQeTUV0EWcrUjcrMaluVrCg04zRKtOAyZFnsBqT0A3JpOSirsUIOcsqMT7T8Y8d8qf5aaKOvUn1rCr1nVlfhwOowuHVGGXjxIeAcL8d9fcX3j16KO5osPQdWVuHEDF4lUIX4vY3qCAANhtW7FJKyOXnJyd3uPWiAZIKcEetOgGSrTgBCyVuKqN5WWcjjodcrDnrzoGnF3RPCcZxUJaPg/yOt2WtsBcET7p+y2vI02dSWg6ounLtGksSFyLuR5j0HT1qq98zNRXUckd+Jn/bQhLZG3l07aGpIS7DbIKtP9yKSMXwSwcik6lhJPc1zlSTk22dpQpqEUkabAW9qqSNKmbPgmFOn70poK4FapZBTFNL+gipJ7leGkSmb/nysjFCT7gGkaEmPMZ0nUetb1GH7UWnrZbnHYmq3iJxlF2cnt48ba68diuqC02box8NRpymVEyJ1Hp6gmzdzVvmUFGNGWbk+yl9tfLw4q5duhFytdDATKogcAtyAB5z0FRLNK6h83YtzVOFpVbrklfV/nwB2LvzOWV1PvFczgCI18wHIySKmpxto/69+RSrzcleGmvFq7t6peLsSWr9y+AGLOElo3dp0KgbBdNz0+TOEaTdrK+nd/ocatTExV7tLW3F93h3v/G4a+uVlAOpkBgYTWDsNCe/MTSlGSab/wBFSqQcZQjz0Tvp/vfx2Hf8RB942J/qsXmPaSsg6RQ9W+Gb5od14P4nC/fCTPIXt1ziZ3EkXsI0gVu0J5oJnO4mllm0R4y3BmrKZnzjYjQ0aZE0TpREbQG9reKeGvgIfMf8wg7f0frWVi8RmeRbG7gMIqcc8t2ZTCYZrjhFElj+ye1VIQc2oo0Kk4wi5S2R6Bw/BrZQIvLc9TzJreo0lThlRy2JrutPM/LwLYqYrDxTgjxTgsmtrJ/WnAJXtlWysIP49x1FJO404OO5ItGQs0XDrma3kuDODsDy7/DrvVSpG0rx0NfDybpZZq5K+I/h9Msr15jv3FBlz8SXP1WltDI+2HEmxA8JCDOpIjyg9+pqnjaqowyrdmn0Zh5YieeXwr69xV4NgWtqEbloD2rB6y51Kp2NRwvCaigepMnZGvRIXQkelGlYrtq+qGswQFjy+JJ5DuSdKOlSdSaiuJBicRGhSdR8PrwXmCOHcOa/mZAdBLhiQCxJJgKZmI3rqKlSNKyl5eC8Tz/D0KmJblDfjfi3du1mSYHBMWH8uDJzMQCFj3pB0Ed51601Sosvxe+AVDDzc/gtze9uenD115l27bsF4Fy40Zcq22YxA5kyB1/3qFOoo3aS8S3KGHlUyqUntZJvT6rvBuMwBQgGMrajzDNA6wYgb78xzqxTqqS038NDPr4ZwlaWz79ff55kljxcn8pX8IQGdIUu0aS25USNOQoZOF+21m5Ph/YdJVstqSeRbtaNvhrvbu4IY+afCtoc7EZpBIu6eoOXc99TTq1s83pw7hm2mqVKPae979r+vQvXuBX50dANNA5AGmwE1HHFUrap/ItVOjsQ5aSSXJNr0PJ7luuZTO5aG4YwYrQwdWzyszcbRzLMi9ftSK1EzFlEGMmU1ImVJRsJjuIDDWvEPvmRbHfmx7Cq+Jr5I2W7LeBw2eWeWyMDduF2JJkkyT1JrKN02fs7wvwVzMP5jb/0j7v61r4ShkWZ7s5/pDE9ZLJHZerDQFXjMY8CnAuPVadDNkipTgNki0QLL2HvqRkuDMvIj3l7qfyoZR4rckhVXwz2+haPCmXKykPbbZhyPRhuDQKstU9ySWEeko6xYfwdkIsnXTU/pVecszsaFKmoK7M17U8UhSg1e5IA6ci3aKGtVVCnme/Akw1CWKrZeG77l+WB+D4EIAo+PU9zXN1JN7ncUaaS0Rs7XCQ9k6bQQRuDrqKhS3DnK0kS4Cy66NGnM6fWngpN2SuRVakIK8ml4hBOIKWyBgTHI+XQTGbbl9K0IYCtJXlovX5GLV6ZwsZOEHmfdt82Sf8AFCuii0WGzFiVk/ZUkRPf1HWL9LBQpriY+I6VqVXbs6d7avyu7K/f5cwRdwYBLX2yvqy21Vsuu5cpsu2xq/mzWUNtr3Mbq3C7rOz1ajZ28W1w8Gx+IvFgQWGwLblX56dBtroN6UEo6pf0KpPOmnLgm1un4e7eYlphd0VBaBIkqzMX7EMT6/rTtOD1d/EGDjVVoxy3te123835hW9gLNpJZSqMPMzNLTBAVRzJ1MHQQaqxqTnKyd2aU8PQpQvNWi929/BeOvgVxxYogNskDUKgXQa6STrImdBqedSugpS7XzK6xsqdNOn5Rt9W/wAavjYROKHKbl1SdSqCQJPOT10ifXpSdFXyQfiKOMeR1ayfFLv5/T3YD+LdbUvqdfeNWLU1pYodZWlrm9TL3MLXHnprK1zC0cZWAlFPct4YZlg7j6itjD11Na7mHi8M6butipjraqpZjCqJJ6VaclFXZQ6vO7I854tjzeuZjMAQo6AbVkzm5ycmbVOChFRXAJezXDMx8VvdU+UdSOfoPx9Ks4SjmlmeyKWPxOSOSO7NYhrWRgMmWiI2SpTgMmSnAZPbZYysNDzG6n8x2p7CjJLRjr2FZAGOqt7rj3T27HtSjJPQedJpZuBNhcOXMCjcktyKFOU3ZGo4Xg8g/GqdWpmZr4egqasih7RcSGGSCC2YgKFgSTrqOVRSqRpx6xlmFGdWfVL5/kxOHR7lw3X1ZvkByArExGIlVlmfl3HTYLCQoQUI+b5s1nB+HFiDFUpNtmopKKNrZtBLRGmx+cQKlStEqSeaYP4taBsMTygzAPODHzq30bJxrpLjoZPT1OM8HJvhZr52+jBvDcO1xMllFXrsC56MxMkdgIrfqONOWaX+HHUFOvDJTSX1fi738rWJ8fwy7h0V3zZF6DLHYESQfhTU60Kkmo7/ADHr4StQjGU27Lyt5q7v7uEOG+1WGdMj2iigQXJ3neTv+NVZ4aqnmjK7NOlj8O45Jwsrb+9fqR4y7h7qZsOIysDDbMAIk65so01mB0qSn1sZWqPf0+xXr/p6kL0Vaz2fHhrxsvGyKOIt5SFBcHSNcmw8zqvJdwNuZNTxd1d2+vlfmVJwyyyxbT0tw23aXL5cXchvL4jIqFmykKFJJzmZJVFBygaydd6eLyJylpf08+JHNda4wg27O3i+Nkr2XMa8u7ADw8snKG0WPeGYx8Br8qJPLFX1vxI5LPUko9m3C+3PXT7/ACGXELmAy5dIg6abDckc/rTqSjqwZwnN2TVvT7v22F04faUQTdn/AFBe+xE/Oq/WzfL5GksJRirNy+dvQzb4TlXKnfkT4KnGsV3wZBkb1JGo4u6AlTUlZnnnttxwXX8K37iHzEbM43j+kfvlV6daVSKTMyNCNOTsCeAcJbE3Mo0VdXPQdPU7UqNN1JWBr1VThc3dzBZYCiAAAB0ArYilFWRz9TNOTkyMKRuKkRXkrEq0REyZaIBkymnSAHqKNAMMcINxZAjI3vKwlW9R+dR1VF77lnDdanps909mGsLgo1QQJ93p6E1WlPmaFOkv4om4nxK3hbed9WPuoNye/wB0d6q1ayirsv0cPKbsjzm7jbmJuPccyQ2g5KN4FZdavKo9duRt0MPGkrLfi+YcwuGBgjY6iq0i9A1HBhAoEg56hgpIidKN7EV0ncpe0FwLYI+8Qv5n6Cr/AEZDNXT5Jv7GJ/yCqoYNrjJpff7GfsYw25ayfDefKWhjlO+YRAPcfKt+UHNWkcZSrQpTzU9Hsn3BI8Uv3Fm9ilQnVVCEho6mIHxqBUYxdow9S7LFVKkbzq25LLp58AZZ4ab5L6M5MsCVWRpJ3C76RU8pRp6cClBVcR2o6u+2i87kiOASp0EnyqFJnlrsfyj0p7XV0DfLJwlpvppf39B9nEhSSys1wjTO2ZTPu6E5j6bdqFwvpHReocayXamm5ba7Pl72ES1cIPhkkgHPlB0QQfeB0BnYdKJyh/JfPmAoVbPq23ve3BePJ32RHathcrt5uZUz1MBid5I+VE9bxWhGlltUl2uLX5CL3rhm5CBtwBEwPtFZ0QDaobQXZ9/6XHKu/wB2yT3038bcEimeLP3PcsZ/CpOpXAr/AKyXG/zFsiuNTR6jKLRKyzTgXMX/AIi+0Aw6eBbP824vmI3RDp8GOo9NelS04X1ZDVqWVkeXYLCPduLbtqWdyFUDmTVhlVK57ZwT2UXD2FtqZfd2+8x3+A2FHh8WoaNaAYnAuorp6keJwDKdRWrCrGSumY1ShKDs0VzhalTK7gJ/BDpRKRDKkh64AUWcB0ETW+HjpT9YN+nRfw+BHIULqEkaCWyCljCgCWIUDUkkAAdSTtUMqiRap0GxL3E8ulpSf/sYHL/2g+967etZ1bGJaR1NfDYBvWWiMtj+HkydSTJJOpJO5Pes6VRyd2a0KairJFPg+FjMCPtUGYNxDOBXIY5Tp+lM2EkaXh5FNcdthQ3ABJIAHM0cYym8sVdkVSpCnFzm7LmwLjeLI7KFs+NE6NnUA9fKfMI+Vb2EwkqMHmlZvwOP6R6Rp4qoskM8Ve2+/OyBN5odmyC2RqFUkgTpIbWeu/pWjH4UtzCqK1Ruyjbh+N/EbcuB2GYzH2iZJ+JWY7QaUYZbtCnX6y0ZcON/f0Jbt1cuQMcrEFzlM9lEN5h6gUyi73a27/f3HlOKVoy0b109N9fkhC4HlCgBdfMPNtzA077H6U6XG+4zl/Gy01138xl22SucLCTEhSAZ7nf+1PGVna+oFSDcc6WnPX7llfERVMjLmViM06/Z8QDWDGx76UDySbXH3sSx62mlLhdXV/8A7W1+ZWXHMs5SQTuQdOckA6TGkxoKJ04ytcCOInBO3H39CFmB3AIkGY105dPpR2Ic2lrfkmawSZhROsM6zr1nWhuHKMr8F5r8ha1anWABXEpXPW2y0tochRZQNTGe23+HK4nPfw5K3z5mVmJW5A5E+6YGnL03qWFRrRlWrST1W4M/w89n2wwN17Za+4hEIMoswRtoTzn06zrwwKnTUpyt8vI5ur0xKnWdOlBStprffjtyNpj79+2M7WXt2yQAWSWEjSZYA6+lFDo/DvRSu/H+iOr0xjYvNKCjHm0/yUk4wwJzBXHJWXT45SNfjVqPR9GPw3+bM+fTeKm+1a3K3tlhLKvbFwhLfM/zVMDsolpnlQyhJStG/wAvuWqeJjKClUt5P/8AO5TZkkBZeRPkGb8YM/Cny1FuvoP+owzdlP0f4JGdV94OugMFYMHYx070Km3sn8iSSpRV3NfMcmMSJCuf/BdOvmaitUf8QOuw6v2725XZVPtEQ2VbeXWDMsfhoB+NOqM5fE7ATxtKKvTV/HRfkk/i2a4hDi7BGlwFEBOh0ERE7ipFh4ZXdff+inLH1esVpXS5aL8+p1viDQeZmZJHl9VIMz6iglgKMn8KHh0xioQfbbfC9vuh6cQnRlX1BiPhVefRNN/C2vUuUv8AkleP/ZBPwuvyX8XwsWQtx9Bc2iWB0ncD6b1mro+pKTUGnbyN+XTNGnCMqiav5r5oTD+E2aCTlEsI1AmCYO4HOKf/AMZWW9l5gf8An8K03HM7d3vzEbiWSTbUMo56mOkjSAfWrdLoqP8AOTv8vyZ2I/5FUT/bgrc3d+GituUbt57q57j+UGBpImJAhdtOZHLetKlSp0ezBa++JgV69fFp1K09FtyvySX1DvBsJhPCBu3ouMZGQkFdYg8u9BXnWz9iOi9Sxg6OEVJOrO0ntZ6od7SPhcqqCzPBC3FywSB7rKOWo1HWhwzq3vsuX4Dx8cO1ZXcuat8mgEmIQKFdGJ1AZcgInXzSJInn8Jq1KMs14+/Uzacqbp2qLbZq349RS7OuUBmjzHKiwOSk5dRp+zSVou7+opOdSFld8dF5LYixNsoSpkMNGHfnJGnw/YKLUlciqQdN2e/E5VLa5SYGkSQANToTttT7cRPtptLRctfaOW9A0gSIOgk95gnnTNa3Y6qNK0dOY+wpdsmcQQBq0DkYkjy9/Q0z01SHheTUJS09Pnw7wle4NZS2f/67RuROUCRMbAzM/CoFWnKXwOxelg6MKT/di5cuHzBlnFKAAQCevhofqamlBt3v6lWlXjGCTgn5GhawRXH2PUVMlsimE3ctLTgsCe0ntBewTobRULdBmRMMCBI9a2MAo1aeWa2+hzPSmfD1s1N2zLa3Fbv6FM+0b4hWS9fInQgLI9IgfjWmqEKbvCKOfni6tWLjVm7Pw18l+SLhNq07FLrsib+UTJHM6fLTnR1cyWaCu+8gw3VyfV1HZPl3F3FcEwRRnsXXLD76mCfgAR6ioYzrqVpxRdlTwjg3Sm3bmv6BPDrwW4CeusiQddZ9RzqzNXi0ZtOWWpGTC/tVgGRlfwraAggFHZwdNiHAiB00qvhpqSabfnb7Gh0lRdNqSSSfJt/UBPiCwCgKABAgGT6kkkak6CBrU9lF3KLm5xUbLRFq7gHtWxcZFy3BCkmfiADINMpxlJxT1Q7pTpwU5JNS2IVtllJ+6JEbATqdecxyO5p9E/EFXazL+JGw2kqBEkwe+/U0s2jtzHyXcU9Lr35nJEgtJUiZUKpjqF0A220ole2gEklPtbEmDtnUWncqxOWSU1AJ1AOjdDPLvQS0WpPTzSllh+NlfvJcRdDMpvgBhu2XcbAnIw17xNMlZPLsFKanKOfR8e/lszlBCi6CFUNlzKCCpInrJ5D0p2/4sCMXZVIu2tr+v9EC6OM2sGRoG3g+6TGuk0SacbojlFwnllwd/uR4rCkO7MyofuhIGbTQZTAFMtErakkpxk2pKzXL6cidXSMoYTpJ8FRGmozTJIOmgE9aaOa9/uKpKDgo3/8Aj973/JEamKReVWGVCxE+bKvSJBOoBPxmom1q7FpRmko331suXPgTYPDm5dK2QvWTmhQNzrJn5005KMLyDpU3UquFJL1079SreBRmt5m3hspgMR16j1olaSUrELUqTlTv3acSDxZ6gDbU6c/xNFbUC+h19CDr20nsDAjTv+4plsPO99SPC2QHzAAkebzajTtSaTCjOXjYsDEpztAmSZzMo1PJQYA7UOV8GF1kOMV6n//Z',
      ),
    ),
  ),
  'field_product_discription' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'machine_name' => FALSE,
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:1:{s:7:"contact";i:0;}',
  'date' => '2014-12-16 12:40:06 +0530',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Accu-chek fastclick product',
  'log' => '',
  'status' => '1',
  'comment' => '2',
  'promote' => '1',
  'sticky' => '0',
  'vuuid' => 'dd471c90-07dc-492f-9fea-91db1c56190e',
  'type' => 'warranty_registration',
  'language' => 'en',
  'created' => '1420535420',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '8929a122-f30a-4dff-ad23-00523aec8d52',
  'revision_uid' => '1',
  'field_serial_number1' => array(
    'und' => array(
      0 => array(
        'value' => 'EGMFBFPS',
        'format' => NULL,
        'safe_value' => 'EGMFBFPS',
      ),
    ),
  ),
  'field_date_meter_acquired_mm_dd_' => array(
    'und' => array(
      0 => array(
        'value' => '2015-01-06T00:00:00',
        'timezone' => 'Asia/Kolkata',
        'timezone_db' => 'Asia/Kolkata',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_first_name1' => array(
    'und' => array(
      0 => array(
        'value' => 'satheesh',
        'format' => NULL,
        'safe_value' => 'satheesh',
      ),
    ),
  ),
  'field_last_name1' => array(
    'und' => array(
      0 => array(
        'value' => 'gopal',
        'format' => NULL,
        'safe_value' => 'gopal',
      ),
    ),
  ),
  'field_address_line_1_' => array(
    'und' => array(
      0 => array(
        'value' => 'test',
        'format' => NULL,
        'safe_value' => 'test',
      ),
    ),
  ),
  'field_address_line' => array(),
  'field_city' => array(
    'und' => array(
      0 => array(
        'value' => 'chennai',
        'format' => NULL,
        'safe_value' => 'chennai',
      ),
    ),
  ),
  'field_zip_code' => array(
    'und' => array(
      0 => array(
        'value' => '456123',
        'format' => NULL,
        'safe_value' => '456123',
      ),
    ),
  ),
  'field_telephone' => array(),
  'field_e_mail' => array(
    'und' => array(
      0 => array(
        'value' => 'satheesh.gopal@accenture.com',
        'format' => NULL,
        'safe_value' => 'satheesh.gopal@accenture.com',
      ),
    ),
  ),
  'field_gender' => array(),
  'field_when_were_you_diagnosed_wi' => array(
    'und' => array(
      0 => array(
        'value' => '2015-01-01T00:00:00',
        'timezone' => 'Asia/Kolkata',
        'timezone_db' => 'Asia/Kolkata',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_what_medication_do_you_tak' => array(),
  'field_how_often_do_you_test_your' => array(),
  'field_what_blood_glucose_meter_d' => array(),
  'field_what_type_of_primary_healt' => array(),
  'field_state' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'block' => '0',
    'allow_draft' => '0',
    'auto_save' => '0',
    'submit_notice' => '1',
    'submit_text' => '',
    'next_serial' => 1,
    'submit_limit' => '-1',
    'submit_interval' => '-1',
    'total_submit_limit' => '-1',
    'total_submit_interval' => '-1',
    'progressbar_page_number' => '0',
    'progressbar_percent' => '0',
    'progressbar_bar' => '1',
    'progressbar_pagebreak_labels' => '1',
    'progressbar_include_confirmation' => '1',
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'status' => '1',
    'record_exists' => FALSE,
    'roles' => array(
      0 => '1',
      1 => '2',
    ),
    'emails' => array(),
    'components' => array(),
    'conditionals' => array(),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'machine_name' => FALSE,
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:1:{s:7:"contact";i:0;}',
  'date' => '2015-01-06 14:40:20 +0530',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Accu-chek fastclick product',
  'log' => '',
  'status' => '1',
  'comment' => '2',
  'promote' => '1',
  'sticky' => '0',
  'vuuid' => 'a406a870-7897-4dba-a49d-aa34f2fb4a6d',
  'type' => 'warranty_registration',
  'language' => 'en',
  'created' => '1418733410',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => 'd052f8be-678b-4566-b98c-9bef8ee89bc0',
  'revision_uid' => '1',
  'field_serial_number1' => array(
    'und' => array(
      0 => array(
        'value' => '4CT4UTEQ',
        'format' => NULL,
        'safe_value' => '4CT4UTEQ',
      ),
    ),
  ),
  'field_date_meter_acquired_mm_dd_' => array(
    'und' => array(
      0 => array(
        'value' => '2010-05-06T00:00:00',
        'timezone' => 'Asia/Kolkata',
        'timezone_db' => 'Asia/Kolkata',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_first_name1' => array(
    'und' => array(
      0 => array(
        'value' => 'test',
        'format' => NULL,
        'safe_value' => 'test',
      ),
    ),
  ),
  'field_last_name1' => array(
    'und' => array(
      0 => array(
        'value' => 'test',
        'format' => NULL,
        'safe_value' => 'test',
      ),
    ),
  ),
  'field_address_line_1_' => array(
    'und' => array(
      0 => array(
        'value' => 'test',
        'format' => NULL,
        'safe_value' => 'test',
      ),
    ),
  ),
  'field_address_line' => array(),
  'field_city' => array(),
  'field_zip_code' => array(
    'und' => array(
      0 => array(
        'value' => '789798',
        'format' => NULL,
        'safe_value' => '789798',
      ),
    ),
  ),
  'field_telephone' => array(),
  'field_e_mail' => array(
    'und' => array(
      0 => array(
        'value' => 'satheesh.gopal@accenture.com',
        'format' => NULL,
        'safe_value' => 'satheesh.gopal@accenture.com',
      ),
    ),
  ),
  'field_gender' => array(),
  'field_when_were_you_diagnosed_wi' => array(
    'und' => array(
      0 => array(
        'value' => '2014-12-01T00:00:00',
        'timezone' => 'Asia/Kolkata',
        'timezone_db' => 'Asia/Kolkata',
        'date_type' => 'date',
      ),
    ),
  ),
  'field_what_medication_do_you_tak' => array(),
  'field_how_often_do_you_test_your' => array(),
  'field_what_blood_glucose_meter_d' => array(),
  'field_what_type_of_primary_healt' => array(),
  'field_state' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'block' => '0',
    'allow_draft' => '0',
    'auto_save' => '0',
    'submit_notice' => '1',
    'submit_text' => '',
    'next_serial' => 1,
    'submit_limit' => '-1',
    'submit_interval' => '-1',
    'total_submit_limit' => '-1',
    'total_submit_interval' => '-1',
    'progressbar_page_number' => '0',
    'progressbar_percent' => '0',
    'progressbar_bar' => '1',
    'progressbar_pagebreak_labels' => '1',
    'progressbar_include_confirmation' => '1',
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'status' => '1',
    'record_exists' => FALSE,
    'roles' => array(
      0 => '1',
      1 => '2',
    ),
    'emails' => array(),
    'components' => array(),
    'conditionals' => array(),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'machine_name' => FALSE,
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:1:{s:7:"contact";i:0;}',
  'date' => '2014-12-16 18:06:50 +0530',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Accu-chek aviva nano product',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '1',
  'sticky' => '0',
  'vuuid' => '0a05e5b0-d2f9-4ab9-b040-210f3192d0a0',
  'type' => 'product',
  'language' => 'en',
  'created' => '1418713656',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => 'd79d40ca-a587-44b8-ada6-7af7cf4a316e',
  'revision_uid' => '1',
  'field_product_id' => array(
    'und' => array(
      0 => array(
        'value' => 'accu-chek-1',
        'format' => NULL,
        'safe_value' => 'accu-chek-1',
      ),
    ),
  ),
  'field_product_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Accu-chek aviva nano product',
        'format' => NULL,
        'safe_value' => 'Accu-chek aviva nano product',
      ),
    ),
  ),
  'field_product_type' => array(
    'und' => array(
      0 => array(
        'value' => 'Accu-chek-Aviva',
      ),
    ),
  ),
  'field_product_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => '1',
        'filename' => 'ac_homepage_herodisplay_edit_2_2.jpg',
        'uri' => 'public://ac_homepage_herodisplay_edit_2_2.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => '9269',
        'status' => '1',
        'timestamp' => NULL,
        'uuid' => '984bb5be-56ab-4e17-9f43-fbb5b8946585',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => '940',
        'height' => '240',
        'uuid_features_file_data' => '/9j/4AAQSkZJRgABAQAAAQABAAD//gA7Q1JFQVRPUjogZ2QtanBlZyB2MS4wICh1c2luZyBJSkcgSlBFRyB2ODApLCBxdWFsaXR5ID0gNzUK/9sAQwAIBgYHBgUIBwcHCQkICgwUDQwLCwwZEhMPFB0aHx4dGhwcICQuJyAiLCMcHCg3KSwwMTQ0NB8nOT04MjwuMzQy/9sAQwEJCQkMCwwYDQ0YMiEcITIyMjIyMjIyMjIyMjIyMjIyMjIyMjIyMjIyMjIyMjIyMjIyMjIyMjIyMjIyMjIyMjIy/8AAEQgA8AOsAwEiAAIRAQMRAf/EAB8AAAEFAQEBAQEBAAAAAAAAAAABAgMEBQYHCAkKC//EALUQAAIBAwMCBAMFBQQEAAABfQECAwAEEQUSITFBBhNRYQcicRQygZGhCCNCscEVUtHwJDNicoIJChYXGBkaJSYnKCkqNDU2Nzg5OkNERUZHSElKU1RVVldYWVpjZGVmZ2hpanN0dXZ3eHl6g4SFhoeIiYqSk5SVlpeYmZqio6Slpqeoqaqys7S1tre4ubrCw8TFxsfIycrS09TV1tfY2drh4uPk5ebn6Onq8fLz9PX29/j5+v/EAB8BAAMBAQEBAQEBAQEAAAAAAAABAgMEBQYHCAkKC//EALURAAIBAgQEAwQHBQQEAAECdwABAgMRBAUhMQYSQVEHYXETIjKBCBRCkaGxwQkjM1LwFWJy0QoWJDThJfEXGBkaJicoKSo1Njc4OTpDREVGR0hJSlNUVVZXWFlaY2RlZmdoaWpzdHV2d3h5eoKDhIWGh4iJipKTlJWWl5iZmqKjpKWmp6ipqrKztLW2t7i5usLDxMXGx8jJytLT1NXW19jZ2uLj5OXm5+jp6vLz9PX29/j5+v/aAAwDAQACEQMRAD8AsUUUV+dn0AUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQB2Xw7/5Cd5/1xH866m38XaNcq5juWO2WSPAjZidhAZsAH5eR8x45rkPAsC3dzqFs7uqy22wlGwwBPOD2rqLbwTpFjdSzWazW/nBlkjjcBGRguVxjgfKOnPWvsMn/wB0Xz/M8jF/xWXI/E+kS/duzjymmBMTgNGMZYEjkcjkdc0278S2dpez23lXE32ZVe6kiQFLdW6Fzn0BPAOAM1CvhGxH2UNPdyLbReSitIMGLKkIeORlR7nuTSS+DtMcXiQme1gvIRDcQW7hUkUKVHbIODjjFeocxI3jDQUZ1OoLlF3viNyFGFOSccfeX88daurrWntay3P2kCCKPzXkZSAE5+bJHI4PSsSX4e6DNJcM0UgS44kiVgFI37sDjgZ447cVry6HaXGkQ6XM0sltGqphn5cAYG49/X6igCb+1rEvCguoyZgShDccevpST6vYW0KSyXKFHlEKmPL5fGduFzzgGsaPwFocaIuydthyC0pJ+8rfzQfmfWp4vCGnxQRRLLct5V19rDO4YmTZsycjn5aANb+0rEnAvLfO3djzV6evXpWfrWqWL6Xd2qXkDTy28myNXBJwhJ4HtWSnw70vzZvNlneEsDAgbHl4JPJ7ncz9eMHGDVi68MabpWmXdzaoUkS3n54wd4Ge3+yAPQVnV/hy9GVH4keb4pCKl20hWvzu57pCRSGpStMIppgMpKcRSVQxtFLSUwCiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAkhuJraTzIJpInxjcjFT+lWP7X1L/oIXf/f5v8ap0oq41JxVotolxT3Rc/tbUv8AoIXf/f5v8aX+1tS/6CF3/wB/m/xqnTgKft6v8z+8OSPYuDVdS/6CF3/3+b/GnjVNR/6CF1/3+b/GqYFSKtQ8RV/mf3i5I9i2NT1H/n/uv+/zf408alqH/P8A3X/f5v8AGqyrUgWs3iav8z+9i5I9if8AtHUP+f66/wC/zf402W8u5ozHLdzyIeqtKxB/DNMC07bUPEVXo5P7w5Y9iDbTStWCtNK1mpFFYrTCtWWWomWrTAgIphFTMKjIrRMYw02nGkqhiUUUUwCiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiikoAWiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKAClpKcKQCgU9RTQKkUVLYDlFTKtNRaklkgtIfOuZkhjH8TnFQoym+WKuyJSSV2PVakC1zV54+0GyJVXknYf3FwP1rFuPixCp222m7j23vn+Qrvhk2Nqa8lvXQ55Yqkup6EF9qdsPpXmq/ELxJd/8AHnojMD0KW7tT/wDhKfHbcrotyB/15n/CuhcOYt9V9/8AwDN42mejFD6U0p7V50fFnjePmTSLkD/ryP8AhTf+Fi61bcXdgievm27pQ+HcWuq+/wD4ALG0/M9DZaiZa4y2+Jqy4EtjC3/XOXH6Gta18baPdELKJbZj3dcr+YrCpk2Npq/Jf01NI4qk+psMtRMKnRoriETW8qSxnoyHIqNhXBZxdpLU6U09UQEU01Iwphq0UMNFLSVQBRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAtKKSnCkwHqKlUUxRUyDJFZyYht3dR6dYvdSDOOFX1NcBdWGueKtRSONJJZpj+7jHAA9fQCux1eL7bqthYZ+Q/Ow/z9K7vT7e28M+GrvWXiXzmjLD/dHCKPqcH8favtsmwcKOHVRr3pfkeLi6znUceiPMT8OvDXhWBJ/E97JfXrDctnbnav+JHucVCniKKKZbbQNE07TlY4D+UGfHqWP5msbUr641G+mu7qQvLK25mJ/l7VQzzXsnIdhqT6vJdQoNduzFcOiRshAUbkRsttIAGXwMehrCmj1F7dZxqV7gs6nznKYI24yS2Bkt3qtY3djbiQXlu04kAHDY2gMDx7nGKc97o7qoaylBVSMiQ8nHGefUn9KARaaG/jk8mLUb5Stus32jzm8tiVB2jHuwGc+vFXXk1qxWcrrU0ywoXZZYg4YBmwBuJzlVLViw3ekvDHFcW5/dxYDAYJcZJzg85OB7YqN77SFctFpzDnIDuWxwffnnb26Z+tAFg67pGoNs1nQraYHrPbp5Ug/I8/mKLvwUl1YNqPhW/a5iX71rMfmHtn19j+dc6a0/DutS6Jq0U6sfIchZk7Mv8AiOtIZW0DxHd6XenYGR0OJrd+A2OoI9a9YguIb6zhu7c5ilXcPb1H4VwPxJ0eOy1O01u2ACzt5c2OhOOD+WfyFbngO5M2j3VqTnyJQy+wYf4g14GfYSMqPtkveX5HdgqrU+XozoGFRkVMwqJhXySZ6xGaQ040lUMSiiimAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABQKKUUAKKctNFPWpYEiirEY+YVCgqxEPmFZNksohd/jFB/dgz+grrviW5tfBqQJwGljj49ACf6CuUtxnxsw/6Yf0FdN8WDjw5b/8AXyP/AEFq/SMJ/u9P/CvyPn6nxy9T521R9Su9UltrGK4kWJQWECFjz3OKpHS9ebrY6mf+2Mn+Fer/AAhmv4vGXiJrGJJG+zxBwRkgZ6jkZ+le1w3mttqSRy2aJbll3MBkAbeed3r7Vq3qCWh8eJoutSSorWOoqGYAsYJMD36VonwlefZWlzelwCRH9nkB4J/ngfn7V9m1wWlz3Np4pjuby4S6iv725ihaHUJGEIXcQGiPyYCrg46H60XGfOsvgy6JY29zcMv8Ikt5VJ6e3v8ApWbe+HtUtrt4oLXULiMYxILeQA8fT14r6T1y/vh4ruLuC5l+x2d1ZRM63JXyw5BZViHyyBg6gk8jJxnbVrXtNjk1m6lfxAlrkgmIhvk+UccHHvWVWpOKvCN/nYR8t/2NrQ/5h2pf9+JP8Kdai6gupLW6jljdVDbJVKsPwPNfSX9jq0scaeJN7SEBQqOepwO/qcfn6V458SLV7H4m3lrJL5rx2sKl/wC98i1NGrVm7Thy/O4jc8UD7d8MoZ25ZIYnz7ggH+tVPh1Jm7v4/wC9Crfkf/r1cvf3vwo+lq36Mf8ACs34cH/ib3C+tpn/AMeWss1V8JP0NMNpVR3bioWqw45qFhXwET3iE0hpxptaIYlFFFMAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKAClpKUUAOFPWmCpFqGBKgqzEPmFQJViL7wrKRLKVvx45PvB/hXS/FrP/CP23/XyP/QWrmozt8dR+8H9BXTfFn/kXbf/AK+V/wDQWr9IweuHp/4V+SPn6nxy9Thfgxci08X+JpWBIFvF0+tena54xutP8PwalbW0eZLkwbZckYG7J4x3UivLfhHcfY/Eniu482OLZZxtvkOFHPc165ZzrfeG7aWe8WfLnMiuJASCRjKjnFdNOpCNVc0boicZOGjscd/wtLVv+fOz/Jv8apL46dLua6XQ9JFxOpWWUQfM4PUE55zXc+TZ/wDPX/x1v8KPIs/+ev8A463+Fel9awv/AD5/H/gHJ7Kt/wA/PwOPtPF4vL2KeTStFintlVYZXg+ZFBxhTnjAzgVauvGl2EkmuLPR5fmGdql2Y8DPJ54rpvJs/wDnr/463+FVL+K12xKl2kbbskMWTcPu9QM/eZfr071DxGHvdUtPX/gFezq2+Mw28UvJI4Sy0MhjjLxkEjP1PpnrXkPxHumvPiVPcuqq0tnbuQnQExL09q9neK4jCmTXLNZDuABTCnONv8PJrx34pDHxUuxu3f6LByO/7pa5q1WnNJQhY2pRmr80rm39/wCFUg9Lab+bVl/Df/kNzf8AXkf/AEJK04OfhdMP+naf+bVmfDj/AJDs3/Xkf/Qkry80/wB0n6HRhv4q9T0FxzUDVYccmoHr89ie8iE0w09qaa1RQ2iiiqAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigApRSUtIBwqVaiFSr1qWBMlWY+oqulWI+orGRLM9zs8cWh/vREfpXVfFhc+GYT6XK/8AoLVyV6dnjHTm9Vx+hrsviku7wijek0Z/Q1+j4B3wtL/CvyPAq/xJep5z8LUhbWfFyzwJPE2mpuiccPyeD9a9YspLbTPD1jbWmkubaNgvlWwYhBglmGeTye/JzXzW9ymmavLczxXhhlRADbOynKnJBwRwen41Wn122KyiG819GCHyy1wxy2D156Zx+tdTttbUlXta+nY+nTqsaiRm0W+IXBGxM5H6eoqa4v4rad420i9dVYAPGuQc4/xr5D/t3Vh/zE7/AP7/AL/40n9var/0FL//AMCH/wAakLI+v7K7ivL3yP7Luo42JCyupC4Azk59cVdu9A02/AW6tVlABA3E8ZIJ/VR+VfGf9v6r/wBBS+/8CH/xqa18Qagl5A8+o6g8CyKZFFw+WXPI6+lMLI+r5tD0i2iM66POdrICCWPHTOATnFeA/FFcfFO7HlmPFrB8h52/ul4rHk8RWUu7Zda4hYg/LO3GOoHzd6ymb7VrM90huXhK4RrliznpwSetJD2PRrXn4Yyj/p3n/wDZqz/hwP8Aie3HtZn/ANCWtC1/5JnJ728//s1UvhwP+J1eH0tcf+PCuTNf9zn6FYb+Kjvn71XerL9TVd6/PYnvIhamGntTDWqKGmig0VQBRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAJS0UUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUopKWkA4VKvWohUq1LETpViPrVdKsJWEhMy9WOzxNpTn1A/nXb/EhfM8EFh2aJv8AP51wviE7NT0uX0kX+dd/41Tz/h5KwGcQxN+RFfouWu+EpPyPBr/xJHgrr8pZiAo6k8YrPkv7NSR56t/u/N/KretyIYbO1K/uwkkzjs7ZULn1wCT+Nc1LKB0ruuZWNFr+3PTcf+AEf0qF7+3UFijADuV/+tWSboFtqK8jeiDNDfap18pLSQs/ygdyT7UXHY0zeRYBEbEEZHy003cX9xh/wE1QaW4gbypbV1dPlZScEEccilS7RjhwUP8AtUrhYufa4Txkj6gj+dPDBuhqnKoxTLVyOPRv8f8ACgD02H5fho3HW3m/m1V/huM6nqLekCj82/8ArVPJ+6+Gij1tj+rH/Gm/DZf3+qtjokQ/Vq8/N3bBT9P1Rrhf4qO2fvVd6neoHr8/ie6iFqYae1MNbIoaaKDRVAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUopKUUAOFSLUYp61DEWEqwhqshqwhrGQmZHi35YLGX+7J/UV6Lfr9s+G0w6/wCht/47z/SvPPFy50WN/wC6/wDn+VejeHSL/wADCLrujeP8x/8AXr77J5c2Bp/P82eJiVatI+c9bXdbxyL/AKyNjjPQg9R/L8q5p4JLieKHY6LITliOwGTj8K7SdMSlSOhxio59Nt5ptHCNDbvczTQvLIdqL8qYJ9ANzV6jRzpnGCQWUzeVlbdzgj+6fWrP257aVZI7gxyqcq6tgg+oNVr0eQ9xGCHCllyOh5xmrH9n2sMKfKHYqCWPekMry3Ml3M881wZZGOWd33E+5JpsFsbsNK+fLGQg9fem3MMQU7UANadkQ1gjkYynSgDLR5FiKFScNtDZAFWLaMhc9hyT6mp57M2Woz2sjxSNDMULxncpxnoakI7CgGd/rH7j4ewJ3MEI/NlqT4bri31WT1eNfyDf41F4yIg8NWtv6vEn5DP/ALLVz4dpt0K9k/vXW38lX/GvLzyVsFJen5m+DV6qOneoHqZ6gevhIntoiammnNTTWqKGmiiiqAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigApaSgUAOqRajFPWpYE6Gp0NVlNToaxkiWVfEieb4el/2WBrsPhpd/aPDBjJyU2t+mP6Vy+pJ5ui3af7Gfyqb4U6gI82rtw+6P8eor7Xh+XNg7dm/0PHxitVucJ4is/sWvX9uRjy5nAHtnj9KxtQ+fR89XtZhNj/YIKv+hB/4Ca7r4q2Y03XZNQKnyp4fN47sowR+g/OvOV/tY2kl61or2mCGaMgMvGTgE5YAZzgdAa9040c1cAiVokAZnOFH9akFpcLGFW5JUDHIqb7L5bm4t8OjjCk5IA9j2+lPhvZILiOR7SKZUYFo3f5XHocEGpKKDWsj5Dz/AJCrdvdKLR42+WSMbSv8iKiupnuLuSVLeO3R2JWJH+VB6DJJqIQ5bzZfmCjkDIH4n+goGT2iHC/ix/Hgfyz+NadhD9p1K1gA/wBZKq/rVJ7TUbewW+NsyWzniRl+9/h/n0rovBdsb3W4rjb8kEZlPscYH6n9KaEzX8fTgvYW+ertIR9Bj/2at3wImzwoG/56Tu38h/SuJ8W3guvEzxqcrbRBD/vHk/0r0DwnH5PhDT17srP+bk14fEMrYW3dr9TqwK/efI03NQNUrmoWNfGRPZIzTTTjTa1QxKKKKYBRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFAoooAUU8UynCkwJVNToarKamU1nJCLQXzYJY/76EfpXJeFruSz1G6jjbbIjiRD6EV1sDYcVwV1J/ZXiuTPCsxFfT8NVNKlP0Z5eYR1TPUfE1pB478FtLaqGuYsny+4bGGT8R0/CvCZbzVdOsG077Kk6LlY59p3oCGGMZ/226g9TXWL4tvPC2tfbrJhJbzYE8DH5ZB/Q+9bl3H4d8d5vNHvYrLVX5ltLg7fMPt7+4z74r6ix51zzDS7eW3s2WUbWZy2z+6OKlkjQnJRT9RW9qXhvWNMYi5sJ1Ufxqu5fzHFYcgK5BBH1oGVSkYGQig+wqtcqzKpQAlW3bT3q2wyeBVm20PU78j7PYzMD/EVwv5nikwM6bVdRvLBbGSNEUKIzKfvlQchevPJP5+wrt9Oji8H+EpL28GyeVQdh69MKv1/xqjDa6N4TIu9au4ri+TmO0hO7aff/wCvxXFeJPEt54lv/Mm+SFT+6hU8L/iaNh2uOt5pbkXF3McyTOXY+5r23TIvs2g6dCeCltGD9dozXjFjbNILa1X70rqg+pOK9xmwpCLwFGBXzXEc/chD1Z6GAXvNkLGoWNSMaiavl4o9MaaSlNNNWMKKKKYBRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFAC0optKKQEimpVNQCpFNS0IsxtgiuK8f2zRXMN6g+V15PuK7FTUOqadHrGmSWkmA3VGPZq7sqxawuJUpbPRnNiqTqQstzxe+u7iSP5iWX+VZS3MiHgmuk1LTbnS7lre5iZSPUcEe1Zz28L9UFfeJqSumeNtoyzY+NvEOnqFttWukQdFMhZR+ByKvn4leJmHz3kUv8Av20Z/wDZawhaRhm+X6CqgmDHAgP/AH1T1FZHQyfETxKR8l3FH/uW8Y/pWTfeLNevwVudUuWU9VV9oP4DAqmT/wBMP/Hv/rVO1oo4ZcEHBFGo9DKYsxySTmrljal5QzDgVaFtGv8ADV7T7K5vrlLWzhaSV+gUdPc+gqXaKu9h3vojoPBunm/8Rwvj9zafvnPuPuj88flXpkjZYms7QtGi0DSxbqQ9xId00g7t6D2FXWNfD5rjFiq94/CtEexhaTpw13Y1jUZpxNMNeejqEpKWkqgCiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigApaSigBwpwNMpwpMCVTUqtVcGpA2KzaESXNta38Pk3kCTJ2DDkfQ9q5278B6XMS1vdSQE/wsAwrbMrHgcCgGuzD4zE4dWpzsuxz1KMJ7o46b4ezA/ur6BvqCP6VSb4e34PyyWp99x/wr0AGjc1egs9xS3s/kYPB0zz9fh5fk/NLaKP8AeP8AhVyL4dyE5n1KFf8AdUt/hXaZNITSlnmKe1l8hrB0zn7b4f6VGQZ7uaf2XCg/zNdBZ2NlpcJisbZIVPUgct9T1NMNAkZevIrhr4zE11ac212N6dGENkTM1Rk0FsjNNJrkSNxCaaaU0lUMSiiimAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFAC0oNNpaQDgaUnIxTaWgBQKcBTQacDSZNhQKXFGaXdUhYTFNIp26kJoCwwim4p5NNNUh2EHFBopKYwpKKKYBRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAtLmm0tIBc0uabS5oAdmlzTM0ZpWAdmjNNzRRYBc0maTNFMApKKKACiiimAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAf/9k=',
      ),
    ),
  ),
  'field_product_discription' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'machine_name' => FALSE,
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:1:{s:7:"contact";i:0;}',
  'date' => '2014-12-16 12:37:36 +0530',
);
  return $nodes;
}
