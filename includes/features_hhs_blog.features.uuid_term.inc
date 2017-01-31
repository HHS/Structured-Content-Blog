<?php
/**
 * @file
 * features_hhs_blog.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function features_hhs_blog_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'World AIDS Day',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '02395c9b-528c-41da-ba29-2c1e7fdb8152',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Global Health',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '03594b05-f785-4f18-8541-a081cd3c2a7e',
    'vocabulary_machine_name' => 'categories',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Indian Health Service',
    'description' => '',
    'format' => 'full_html',
    'weight' => 27,
    'uuid' => '06a2f596-07ea-412e-b294-5c05ab22222d',
    'vocabulary_machine_name' => 'offices',
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'IHS',
          'format' => NULL,
          'safe_value' => 'IHS',
        ),
      ),
    ),
    'field_website_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://www.ihs.gov/',
          'format' => NULL,
          'safe_value' => 'http://www.ihs.gov/',
        ),
      ),
    ),
    'field_logo_or_seal' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Shantel E. Meek',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '07735887-9a9e-42b3-b340-998e9e49fbf6',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Shantel E.',
          'format' => NULL,
          'safe_value' => 'Shantel E.',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Meek',
          'format' => NULL,
          'safe_value' => 'Meek',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'Policy Advisor for Early Childhood Development, Administration for Children and Families ',
          'format' => NULL,
          'safe_value' => 'Policy Advisor for Early Childhood Development, Administration for Children and Families ',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Medicare',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '07a4afc2-941f-4085-a3f1-2deaecbc0cbb',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Head Start',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '07c20559-e0df-477e-b40b-8fff5663ed26',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'tribal',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '08c1d911-7c9a-446f-86f4-c4376bba5fde',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Nicholas Garlow',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '09625723-7417-42b6-8dec-23b0649c35ca',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Nicholas',
          'format' => NULL,
          'safe_value' => 'Nicholas',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Garlow',
          'format' => NULL,
          'safe_value' => 'Garlow',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'HHS (Public Affairs)',
          'format' => NULL,
          'safe_value' => 'HHS (Public Affairs)',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Office of the Secretary',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 18,
    'uuid' => '0a3da306-94a8-417b-943f-fc29f413de87',
    'vocabulary_machine_name' => 'offices',
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'OS',
          'format' => NULL,
          'safe_value' => 'OS',
        ),
      ),
    ),
    'field_website_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://www.hhs.gov/secretary/about/index.html',
          'format' => NULL,
          'safe_value' => 'http://www.hhs.gov/secretary/about/index.html',
        ),
      ),
    ),
    'field_logo_or_seal' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'proposed rulemaking',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '0a75109a-aacd-4c4c-9c90-d8556d277ee0',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'William H. Bentley',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '0abe1688-b4b2-4a20-8d04-02a0774e2f84',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'William H.',
          'format' => NULL,
          'safe_value' => 'William H.',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Bentley',
          'format' => NULL,
          'safe_value' => 'Bentley',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'Associate Commissioner, Family and Youth Services Bureau',
          'format' => NULL,
          'safe_value' => 'Associate Commissioner, Family and Youth Services Bureau',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Administration for Community Living',
    'description' => '',
    'format' => 'full_html',
    'weight' => 20,
    'uuid' => '0b6f880c-7a32-48a4-89ac-9549a52eb105',
    'vocabulary_machine_name' => 'offices',
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'ACL',
          'format' => NULL,
          'safe_value' => 'ACL',
        ),
      ),
    ),
    'field_website_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://www.acl.gov/',
          'format' => NULL,
          'safe_value' => 'http://www.acl.gov/',
        ),
      ),
    ),
    'field_logo_or_seal' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'foster care',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0c034fe4-6906-492e-ab6b-e19e7c783389',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'youth',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0c62d6f4-f12f-422b-8332-a01c36b18a98',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'President',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0ce604fa-cb7d-455d-9f03-ee1a8ea24fc5',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'veterans health',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '0d0127fa-9c42-4aa4-8d23-e30f202be509',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Men\'s Health Week',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '0d396ef4-6a95-4669-bfed-c3306a4020bc',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Richard Pazdur',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '0d8478e1-322c-4a71-83e8-7c15829ed9fd',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Richard',
          'format' => NULL,
          'safe_value' => 'Richard',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Pazdur',
          'format' => NULL,
          'safe_value' => 'Pazdur',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'M.D.',
          'format' => NULL,
          'safe_value' => 'M.D.',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Anne Ha',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '0daec45f-7444-43c9-b21f-cb23ea57cce6',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Anne',
          'format' => NULL,
          'safe_value' => 'Anne',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Ha',
          'format' => NULL,
          'safe_value' => 'Ha',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => '27, Philadelphia, PA',
          'format' => NULL,
          'safe_value' => '27, Philadelphia, PA',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Prevention & Wellness',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '0f875c30-21ef-4193-aaf8-5820bb144a7a',
    'vocabulary_machine_name' => 'categories',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'CMS Blog',
    'description' => '',
    'format' => 'full_html',
    'weight' => 5,
    'uuid' => '11541ad8-cf4c-4200-b63c-b461537fa50d',
    'vocabulary_machine_name' => 'external_blog_sites',
    'field_homepage_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://blog.cms.gov/',
          'format' => NULL,
          'safe_value' => 'http://blog.cms.gov/',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Linda K. Smith',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '1170718f-afd6-4332-8516-11d6e6bccab6',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Linda K.',
          'format' => NULL,
          'safe_value' => 'Linda K.',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Smith',
          'format' => NULL,
          'safe_value' => 'Smith',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'Deputy Assistant Secretary and Inter-Departmental Liaison for Early Childhood Development',
          'format' => NULL,
          'safe_value' => 'Deputy Assistant Secretary and Inter-Departmental Liaison for Early Childhood Development',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'The White House Blog',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '126fa5fa-09dc-4f16-9661-488dcae48183',
    'vocabulary_machine_name' => 'external_blog_sites',
    'field_homepage_url' => array(),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'National Institutes of Health',
    'description' => '',
    'format' => 'full_html',
    'weight' => 28,
    'uuid' => '132cf40b-5545-45a6-909a-4576d13b242b',
    'vocabulary_machine_name' => 'offices',
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'NIH',
          'format' => NULL,
          'safe_value' => 'NIH',
        ),
      ),
    ),
    'field_website_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://www.nih.gov/',
          'format' => NULL,
          'safe_value' => 'http://www.nih.gov/',
        ),
      ),
    ),
    'field_logo_or_seal' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Food Safety Education Month',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '15419d80-2a57-4471-ad70-56db8ae94def',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Tatiana Prowell',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '1587c036-bea1-4673-b2ed-647547e05b81',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Tatiana',
          'format' => NULL,
          'safe_value' => 'Tatiana',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Prowell',
          'format' => NULL,
          'safe_value' => 'Prowell',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'M.D.',
          'format' => NULL,
          'safe_value' => 'M.D.',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Office on Women’s Health Blog',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '15c5e2cf-9d98-4f3b-b8ee-ff2ab10f8a78',
    'vocabulary_machine_name' => 'external_blog_sites',
    'field_homepage_url' => array(
      'und' => array(
        0 => array(
          'value' => 'https://www.womenshealth.gov/blog/index.html',
          'format' => NULL,
          'safe_value' => 'https://www.womenshealth.gov/blog/index.html',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'disaster assistance',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '15d9999b-6951-4109-b312-eddffbc06fbb',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Erik Augustson',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '168e56c9-9e49-4fe7-82b7-8d7ab999f2ba',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Erik',
          'format' => NULL,
          'safe_value' => 'Erik',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Augustson',
          'format' => NULL,
          'safe_value' => 'Augustson',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'PhD, National Cancer Institute (NCI)',
          'format' => NULL,
          'safe_value' => 'PhD, National Cancer Institute (NCI)',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Dr. Francis Collins',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '16d9a500-2184-45f9-8759-ea445361a9b1',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Dr. Francis',
          'format' => NULL,
          'safe_value' => 'Dr. Francis',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Collins',
          'format' => NULL,
          'safe_value' => 'Collins',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'NIH Director',
          'format' => NULL,
          'safe_value' => 'NIH Director',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Food and Drug Administration',
    'description' => '',
    'format' => 'full_html',
    'weight' => 25,
    'uuid' => '178415b2-e045-4018-bb28-d5d3c2575e03',
    'vocabulary_machine_name' => 'offices',
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'FDA',
          'format' => NULL,
          'safe_value' => 'FDA',
        ),
      ),
    ),
    'field_website_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://www.fda.gov/',
          'format' => NULL,
          'safe_value' => 'http://www.fda.gov/',
        ),
      ),
    ),
    'field_logo_or_seal' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Assistant Secretary for Financial Resources',
    'description' => '',
    'format' => 'full_html',
    'weight' => 3,
    'uuid' => '18096152-9ec2-4feb-8d5b-e601aa42a711',
    'vocabulary_machine_name' => 'offices',
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'ASFR',
          'format' => NULL,
          'safe_value' => 'ASFR',
        ),
      ),
    ),
    'field_website_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://www.hhs.gov/asfr/',
          'format' => NULL,
          'safe_value' => 'http://www.hhs.gov/asfr/',
        ),
      ),
    ),
    'field_logo_or_seal' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => '0a3da306-94a8-417b-943f-fc29f413de87',
    ),
  );
  $terms[] = array(
    'name' => 'human subjects',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '18d129e0-1e00-4132-8e0b-26d8f843796b',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'HIV/AIDS',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1a513b92-09c8-4a63-ab8a-70d3240b46b9',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'AHRQ Views',
    'description' => '',
    'format' => 'full_html',
    'weight' => 8,
    'uuid' => '1b06a38d-c966-47f5-b208-d68d7a336e46',
    'vocabulary_machine_name' => 'external_blog_sites',
    'field_homepage_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://www.ahrq.gov/news/blog/ahrqviews/index.html',
          'format' => NULL,
          'safe_value' => 'http://www.ahrq.gov/news/blog/ahrqviews/index.html',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'family',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1ba32a54-c314-4438-af17-6728e4275533',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Vaughn Alvarez',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '1cd502f1-7d01-4853-8a97-f2d17d889ead',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Vaughn',
          'format' => NULL,
          'safe_value' => 'Vaughn',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Alvarez',
          'format' => NULL,
          'safe_value' => 'Alvarez',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'Atlanta, GA',
          'format' => NULL,
          'safe_value' => 'Atlanta, GA',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Amelia Kermis',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '1d60b4e3-efb1-4cfc-998b-4a2c6b3ddc5f',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Amelia',
          'format' => NULL,
          'safe_value' => 'Amelia',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Kermis',
          'format' => NULL,
          'safe_value' => 'Kermis',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'MPH CHES, Food Safety Education Staff, Food Safety Inspection Service, USDA',
          'format' => NULL,
          'safe_value' => 'MPH CHES, Food Safety Education Staff, Food Safety Inspection Service, USDA',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'BRAIN',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1fd3a8e7-695e-40b0-ae94-6c4f39952f29',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Agency for Toxic Substances and Disease Registry',
    'description' => '',
    'format' => 'full_html',
    'weight' => 22,
    'uuid' => '220dcb73-af6f-49ce-ab7b-6d44b572b475',
    'vocabulary_machine_name' => 'offices',
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'ATSDR',
          'format' => NULL,
          'safe_value' => 'ATSDR',
        ),
      ),
    ),
    'field_website_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://www.atsdr.cdc.gov/',
          'format' => NULL,
          'safe_value' => 'http://www.atsdr.cdc.gov/',
        ),
      ),
    ),
    'field_logo_or_seal' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Commission Corp’s response to the Ebola outbreak',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '22e22912-7924-46c4-b4ee-849d0b264307',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Administration for Children and Families',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 19,
    'uuid' => '233a3df7-dc29-4866-89d8-183094c70187',
    'vocabulary_machine_name' => 'offices',
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'ACF',
          'format' => NULL,
          'safe_value' => 'ACF',
        ),
      ),
    ),
    'field_website_url' => array(
      'und' => array(
        0 => array(
          'value' => 'https://www.acf.hhs.gov/',
          'format' => NULL,
          'safe_value' => 'https://www.acf.hhs.gov/',
        ),
      ),
    ),
    'field_logo_or_seal' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Emily Dalton Niles',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '239c76f7-ffae-400d-96a8-e0a93bae0ada',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Emily Dalton',
          'format' => NULL,
          'safe_value' => 'Emily Dalton',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Niles',
          'format' => NULL,
          'safe_value' => 'Niles',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'HHS (Public Affairs)',
          'format' => NULL,
          'safe_value' => 'HHS (Public Affairs)',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'National Institute on Drug Abuse',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '23d4969d-aca8-4085-8fb1-f0f0eb2faa0d',
    'vocabulary_machine_name' => 'offices',
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'NIDA',
          'format' => NULL,
          'safe_value' => 'NIDA',
        ),
      ),
    ),
    'field_website_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://www.drugabuse.gov/',
          'format' => NULL,
          'safe_value' => 'http://www.drugabuse.gov/',
        ),
      ),
    ),
    'field_logo_or_seal' => array(),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'digital strategy',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '24abe20a-4e5b-4072-92a5-8f41bcab3df8',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'rural health',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '25582b43-8b18-4fbe-b106-f9e828b7808f',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Carlos Mesa',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '2599b2fe-8514-420d-99dd-97cc0a22435f',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Carlos',
          'format' => NULL,
          'safe_value' => 'Carlos',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Mesa',
          'format' => NULL,
          'safe_value' => 'Mesa',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => '24, Silver Spring, Maryland',
          'format' => NULL,
          'safe_value' => '24, Silver Spring, Maryland',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'nutrition',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '26ba19c4-3476-47d4-afe8-da6039bbb608',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'SHOP',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2a0eac25-7249-4128-b7c6-e7f52f7821bc',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => '#GetCovered',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2a2378dd-956b-48b4-9c05-54b26ed2629c',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'cancer',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '2a866014-7093-496c-adff-78969a7c60ea',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Eyole Mbongo',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '2ac94007-e192-4d0e-8d3e-6d2059dbc0b0',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Eyole',
          'format' => NULL,
          'safe_value' => 'Eyole',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Mbongo',
          'format' => NULL,
          'safe_value' => 'Mbongo',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => '31, San Antonio',
          'format' => NULL,
          'safe_value' => '31, San Antonio',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Ginny A. Roth',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '2b414c21-45ae-4267-8f31-8bac19778acb',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Ginny',
          'format' => NULL,
          'safe_value' => 'Ginny',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'A. Roth',
          'format' => NULL,
          'safe_value' => 'A. Roth',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'Curator of Prints & Photographs, History of Medicine Division, National Library of Medicine (NLM)',
          'format' => NULL,
          'safe_value' => 'Curator of Prints &amp; Photographs, History of Medicine Division, National Library of Medicine (NLM)',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'health centers',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '2ba046e2-a014-4d45-8c2e-22fb5f480c10',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Glaucoma Awareness Month',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2db6ee04-2b69-4b4b-9fbb-018a4dddf129',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Mary K. Wakefield',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '3043c6b7-caf3-4f08-810c-906433b8793c',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Mary K.',
          'format' => NULL,
          'safe_value' => 'Mary K.',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Wakefield',
          'format' => NULL,
          'safe_value' => 'Wakefield',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'PhD, RN, Administrator, Health Resources and Services Administration (HRSA)',
          'format' => NULL,
          'safe_value' => 'PhD, RN, Administrator, Health Resources and Services Administration (HRSA)',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'schools',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3312b169-8d08-42ca-939f-28b3b8309e73',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'FDA Voice',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '339408ad-06b1-4977-a1e8-68cbcd7b2771',
    'vocabulary_machine_name' => 'external_blog_sites',
    'field_homepage_url' => array(),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'ACL Blog',
    'description' => '',
    'format' => 'full_html',
    'weight' => 14,
    'uuid' => '3423c687-40b6-47d0-83bb-f23813baa461',
    'vocabulary_machine_name' => 'external_blog_sites',
    'field_homepage_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://www.acl.gov/NewsRoom/blog/',
          'format' => NULL,
          'safe_value' => 'http://www.acl.gov/NewsRoom/blog/',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Agency for Healthcare Research and Quality',
    'description' => '',
    'format' => 'full_html',
    'weight' => 21,
    'uuid' => '34ffdd93-9631-45a7-82bf-aee53a2b1bc0',
    'vocabulary_machine_name' => 'offices',
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'AHRQ',
          'format' => NULL,
          'safe_value' => 'AHRQ',
        ),
      ),
    ),
    'field_website_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://www.ahrq.gov/',
          'format' => NULL,
          'safe_value' => 'http://www.ahrq.gov/',
        ),
      ),
    ),
    'field_logo_or_seal' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'SAMHSA Blog',
    'description' => '',
    'format' => 'full_html',
    'weight' => 2,
    'uuid' => '37d6d41d-bb8d-4c9d-a6e7-67230fd5ef51',
    'vocabulary_machine_name' => 'external_blog_sites',
    'field_homepage_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://blog.samhsa.gov/',
          'format' => NULL,
          'safe_value' => 'http://blog.samhsa.gov/',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'women\'s health',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '3b6d344a-36ae-4e77-a6b6-85754b9dbab8',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Circulating Now',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '3be42929-b1f8-47ba-8ded-9b307096f11d',
    'vocabulary_machine_name' => 'external_blog_sites',
    'field_homepage_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://circulatingnow.nlm.nih.gov/',
          'format' => NULL,
          'safe_value' => 'http://circulatingnow.nlm.nih.gov/',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'health insurance',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3c03e007-218e-4338-9270-bfa4f1485747',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'PEPFAR',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '3cb0cdfe-9890-4bcc-9dd7-a0213eb46b46',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Immediate Office of the Secretary',
    'description' => '',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => '3cfbc735-a135-419c-95b9-550edbefec16',
    'vocabulary_machine_name' => 'offices',
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'IOS',
          'format' => NULL,
          'safe_value' => 'IOS',
        ),
      ),
    ),
    'field_website_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://www.hhs.gov/secretary/about/index.html',
          'format' => NULL,
          'safe_value' => 'http://www.hhs.gov/secretary/about/index.html',
        ),
      ),
    ),
    'field_logo_or_seal' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => '0a3da306-94a8-417b-943f-fc29f413de87',
    ),
  );
  $terms[] = array(
    'name' => 'education',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3e1d5c36-1b26-436b-9d33-8d97543f2a2d',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Kate Migliaccio',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '3e2bf564-d577-472d-85f1-cd98406cbdcc',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Kate',
          'format' => NULL,
          'safe_value' => 'Kate',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Migliaccio',
          'format' => NULL,
          'safe_value' => 'Migliaccio',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'LCDR, Senior Public Information Officer, United States Public Health Service Commissioned Corps',
          'format' => NULL,
          'safe_value' => 'LCDR, Senior Public Information Officer, United States Public Health Service Commissioned Corps',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'public service',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3ec801ba-6ae9-4837-a5e7-cd8d3e15cac6',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Office of the National Coordinator for Health Information Technology',
    'description' => '',
    'format' => 'full_html',
    'weight' => 17,
    'uuid' => '3f6cf3a3-426f-489a-979a-5ff1fa7dda80',
    'vocabulary_machine_name' => 'offices',
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'ONC',
          'format' => NULL,
          'safe_value' => 'ONC',
        ),
      ),
    ),
    'field_website_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://www.healthit.gov/newsroom/about-onc',
          'format' => NULL,
          'safe_value' => 'http://www.healthit.gov/newsroom/about-onc',
        ),
      ),
    ),
    'field_logo_or_seal' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => '0a3da306-94a8-417b-943f-fc29f413de87',
    ),
  );
  $terms[] = array(
    'name' => 'AAPI',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '406f7486-5590-4e2a-b3c2-407def1eb409',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Kiran Ahuja',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '40753973-52fd-47b1-9143-2d1dbb574b94',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Kiran',
          'format' => NULL,
          'safe_value' => 'Kiran',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Ahuja',
          'format' => NULL,
          'safe_value' => 'Ahuja',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'Executive Director of the White House Initiative on Asian Americans and Pacific Islanders',
          'format' => NULL,
          'safe_value' => 'Executive Director of the White House Initiative on Asian Americans and Pacific Islanders',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'WHCOA Blog',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '417577d7-a1ca-4c54-bb13-dd67158132be',
    'vocabulary_machine_name' => 'external_blog_sites',
    'field_homepage_url' => array(),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Sarah Sisaye',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '42013262-5ae2-4f0d-b53b-57b863141a46',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Sarah',
          'format' => NULL,
          'safe_value' => 'Sarah',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Sisaye',
          'format' => NULL,
          'safe_value' => 'Sisaye',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'U.S. Department of Education',
          'format' => NULL,
          'safe_value' => 'U.S. Department of Education',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'The Family Room Blog (ACF)',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '422ee55f-6dcc-42fa-8564-74bf7e5cf90e',
    'vocabulary_machine_name' => 'external_blog_sites',
    'field_homepage_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://www.acf.hhs.gov/blog',
          'format' => NULL,
          'safe_value' => 'http://www.acf.hhs.gov/blog',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Assistant Secretary for Legislation',
    'description' => '',
    'format' => 'full_html',
    'weight' => 6,
    'uuid' => '425d43e9-88ad-4bfc-b550-59074ea37900',
    'vocabulary_machine_name' => 'offices',
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'ASL',
          'format' => NULL,
          'safe_value' => 'ASL',
        ),
      ),
    ),
    'field_website_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://www.hhs.gov/asl/',
          'format' => NULL,
          'safe_value' => 'http://www.hhs.gov/asl/',
        ),
      ),
    ),
    'field_logo_or_seal' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => '0a3da306-94a8-417b-943f-fc29f413de87',
    ),
  );
  $terms[] = array(
    'name' => 'Assistant Secretary for Health',
    'description' => '',
    'format' => 'full_html',
    'weight' => 5,
    'uuid' => '4264a24b-be62-4651-943d-7c58f426cd56',
    'vocabulary_machine_name' => 'offices',
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'ASH',
          'format' => NULL,
          'safe_value' => 'ASH',
        ),
      ),
    ),
    'field_website_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://www.hhs.gov/ash/',
          'format' => NULL,
          'safe_value' => 'http://www.hhs.gov/ash/',
        ),
      ),
    ),
    'field_logo_or_seal' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => '0a3da306-94a8-417b-943f-fc29f413de87',
    ),
  );
  $terms[] = array(
    'name' => 'senior health',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '4280829b-9963-4223-8ca9-89974ae69f8f',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Health Data',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '4394cc67-a299-4fb6-9ad5-b6e2d11e6cc5',
    'vocabulary_machine_name' => 'categories',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Breast Cancer Awareness Month',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '46c04337-690d-4a2b-bae0-1dc4e7cb2e9a',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Neyal Ammary-Risch',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '46c92c52-2b99-4695-9c60-7509b85dfb59',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Neyal',
          'format' => NULL,
          'safe_value' => 'Neyal',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Ammary-Risch',
          'format' => NULL,
          'safe_value' => 'Ammary-Risch',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'MPH, MCHES, National Eye Institute (NEI), National Institutes of Health (NIH)',
          'format' => NULL,
          'safe_value' => 'MPH, MCHES, National Eye Institute (NEI), National Institutes of Health (NIH)',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Assistant Secretary for Administration',
    'description' => '',
    'format' => 'full_html',
    'weight' => 2,
    'uuid' => '46f5b998-1758-41b0-9085-e3f86e0ec9a2',
    'vocabulary_machine_name' => 'offices',
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'ASA',
          'format' => NULL,
          'safe_value' => 'ASA',
        ),
      ),
    ),
    'field_website_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://www.hhs.gov/asa/',
          'format' => NULL,
          'safe_value' => 'http://www.hhs.gov/asa/',
        ),
      ),
    ),
    'field_logo_or_seal' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => '0a3da306-94a8-417b-943f-fc29f413de87',
    ),
  );
  $terms[] = array(
    'name' => 'primary care',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '478948d9-4494-46a1-aa0f-1b0a81298cdf',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Tom Powers',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '48b347d5-66d3-4499-93f1-75c01e143626',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Tom',
          'format' => NULL,
          'safe_value' => 'Tom',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Powers',
          'format' => NULL,
          'safe_value' => 'Powers',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'Communications Officer, FDA National Center for Toxicological Research (NCTR)',
          'format' => NULL,
          'safe_value' => 'Communications Officer, FDA National Center for Toxicological Research (NCTR)',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Dr. Nancy Lee',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '49b38ef3-a005-46d0-8b7a-f9e42976e792',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Dr. Nancy',
          'format' => NULL,
          'safe_value' => 'Dr. Nancy',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Lee',
          'format' => NULL,
          'safe_value' => 'Lee',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'Director, Office on Women’s Health (OWH)',
          'format' => NULL,
          'safe_value' => 'Director, Office on Women’s Health (OWH)',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Coleen A. Boyle',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '49b6ea16-d9b5-4b2e-a7d0-1c5d8b0880ef',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Coleen',
          'format' => NULL,
          'safe_value' => 'Coleen',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'A. Boyle',
          'format' => NULL,
          'safe_value' => 'A. Boyle',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'PhD, MSHyg',
          'format' => NULL,
          'safe_value' => 'PhD, MSHyg',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Native American',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '49d9ecbf-d884-4ac3-bb13-144f93db9ecf',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Nysia George',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '4a26dd26-9dd5-4b27-89b0-db6fcd3e517e',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Nysia',
          'format' => NULL,
          'safe_value' => 'Nysia',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'George',
          'format' => NULL,
          'safe_value' => 'George',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'Ph.D., Intern Coordinator, FDA National Center for Toxicological Research (NCTR)',
          'format' => NULL,
          'safe_value' => 'Ph.D., Intern Coordinator, FDA National Center for Toxicological Research (NCTR)',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Latino health',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4a84e101-a192-4be1-9ab1-62ae88e32729',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'minimum necessary',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '4c47829f-b70f-4a8f-b3a5-43e1f08e06a0',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'EHR',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '4c504553-32ab-4e6c-919c-a8b35f0830ae',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Health Care',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '4c940580-6fdf-446e-a3c9-b5a0fe498a80',
    'vocabulary_machine_name' => 'categories',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Medicare & Medicaid',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '4db7ab2b-21ad-4184-9d01-d63a4fc5d353',
    'vocabulary_machine_name' => 'categories',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'National Diabetes Month',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4dd16afd-8c49-496d-8951-acde2baa6aed',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Alicia Elatassi',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '4df123ff-5169-4062-b07c-f1dda62c0fd4',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Alicia',
          'format' => NULL,
          'safe_value' => 'Alicia',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Elatassi',
          'format' => NULL,
          'safe_value' => 'Elatassi',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => '39, Houston',
          'format' => NULL,
          'safe_value' => '39, Houston',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'grants',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '4e66dcd4-fdbb-443d-bc47-4217050fcf9c',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Latinos',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4fe00795-7bba-4f5a-8156-f1fd8ba909cb',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Amy Sanders',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '50188884-c2e7-412d-b197-22ada8d79594',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Amy',
          'format' => NULL,
          'safe_value' => 'Amy',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Sanders',
          'format' => NULL,
          'safe_value' => 'Sanders',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'MA',
          'format' => NULL,
          'safe_value' => 'MA',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Margaret A. Hamburg, M.D.',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '5047acde-4426-4498-8618-b28ebada5406',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Margaret A.',
          'format' => NULL,
          'safe_value' => 'Margaret A.',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Hamburg, M.D.',
          'format' => NULL,
          'safe_value' => 'Hamburg, M.D.',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'Commissioner, FDA',
          'format' => NULL,
          'safe_value' => 'Commissioner, FDA',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'The Medicare Blog',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '549fd362-515f-4340-a11f-b707de6ff59e',
    'vocabulary_machine_name' => 'external_blog_sites',
    'field_homepage_url' => array(),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'breast cancer',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '56a5a572-160c-4f5c-ab60-dded41d004b2',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'children',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '56d6d419-c7e2-40ba-b4ed-581dd1ed8f38',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'aging',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '5a6c90a4-56b6-4bdf-887e-cdee33338a53',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Office of Medicare Hearings and Appeals',
    'description' => '',
    'format' => 'full_html',
    'weight' => 16,
    'uuid' => '5ef1637c-a8a3-4b5f-a429-1b74179dd61d',
    'vocabulary_machine_name' => 'offices',
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'OMHA',
          'format' => NULL,
          'safe_value' => 'OMHA',
        ),
      ),
    ),
    'field_website_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://www.hhs.gov/omha/',
          'format' => NULL,
          'safe_value' => 'http://www.hhs.gov/omha/',
        ),
      ),
    ),
    'field_logo_or_seal' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => '0a3da306-94a8-417b-943f-fc29f413de87',
    ),
  );
  $terms[] = array(
    'name' => 'Katherine Elmer-Dewitt',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '5f4797f9-3a6c-4269-8600-4fb63879a28b',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Katherine',
          'format' => NULL,
          'safe_value' => 'Katherine',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Elmer-Dewitt',
          'format' => NULL,
          'safe_value' => 'Elmer-Dewitt',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'Academy for Global Citizenship',
          'format' => NULL,
          'safe_value' => 'Academy for Global Citizenship',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Centers for Disease Control and Prevention',
    'description' => '',
    'format' => 'full_html',
    'weight' => 23,
    'uuid' => '6031d560-a524-4356-a4bd-c06ec32035bf',
    'vocabulary_machine_name' => 'offices',
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'CDC',
          'format' => NULL,
          'safe_value' => 'CDC',
        ),
      ),
    ),
    'field_website_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://www.cdc.gov/',
          'format' => NULL,
          'safe_value' => 'http://www.cdc.gov/',
        ),
      ),
    ),
    'field_logo_or_seal' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Matt Siegler',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '60f7e44a-4031-4206-9db4-15350872302c',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Matt',
          'format' => NULL,
          'safe_value' => 'Matt',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Siegler',
          'format' => NULL,
          'safe_value' => 'Siegler',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'Senior Policy Analyst, White House Domestic Policy Council',
          'format' => NULL,
          'safe_value' => 'Senior Policy Analyst, White House Domestic Policy Council',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'National Hispanic Heritage Month',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '634a96a0-b551-4295-9752-5a40326119cc',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Let\'s Move',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '65e270f8-0b09-45b9-8fab-02866aba7a5d',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'patient safety',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '6a7783e8-c8dd-4592-bde6-2add05f12ce2',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'FDA Voice',
    'description' => '',
    'format' => 'full_html',
    'weight' => 9,
    'uuid' => '6aabfb2f-e7d9-4219-8f08-82dae8c7f0c7',
    'vocabulary_machine_name' => 'external_blog_sites',
    'field_homepage_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://blogs.fda.gov/',
          'format' => NULL,
          'safe_value' => 'http://blogs.fda.gov/',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'prescription drugs',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '6b00f70f-b75f-4432-ab49-bdabec5dbe97',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Assistant Secretary for Preparedness and Response',
    'description' => '',
    'format' => 'full_html',
    'weight' => 8,
    'uuid' => '6b01fcb2-9985-448d-b4b5-5b997683f941',
    'vocabulary_machine_name' => 'offices',
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'ASPR',
          'format' => NULL,
          'safe_value' => 'ASPR',
        ),
      ),
    ),
    'field_website_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://www.phe.gov/ABOUT/ASPR/Pages/default.aspx',
          'format' => NULL,
          'safe_value' => 'http://www.phe.gov/ABOUT/ASPR/Pages/default.aspx',
        ),
      ),
    ),
    'field_logo_or_seal' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => '0a3da306-94a8-417b-943f-fc29f413de87',
    ),
  );
  $terms[] = array(
    'name' => 'White House Conference on Aging Blog',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '6d8e0924-d4ee-4c46-9751-51a84763ef30',
    'vocabulary_machine_name' => 'external_blog_sites',
    'field_homepage_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://www.whitehouseconferenceonaging.gov/blog/',
          'format' => NULL,
          'safe_value' => 'http://www.whitehouseconferenceonaging.gov/blog/',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Jimmy Kolker',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '6db6ce4b-7df8-4927-9a59-1ea2f82d5feb',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Jimmy',
          'format' => NULL,
          'safe_value' => 'Jimmy',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Kolker',
          'format' => NULL,
          'safe_value' => 'Kolker',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'HHS Assistant Secretary for Global Affairs',
          'format' => NULL,
          'safe_value' => 'HHS Assistant Secretary for Global Affairs',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Departmental Appeals Board',
    'description' => '',
    'format' => 'full_html',
    'weight' => 11,
    'uuid' => '703e8d8d-68b9-40b1-9689-cc8e2081e59a',
    'vocabulary_machine_name' => 'offices',
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'DAB',
          'format' => NULL,
          'safe_value' => 'DAB',
        ),
      ),
    ),
    'field_website_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://www.hhs.gov/dab/',
          'format' => NULL,
          'safe_value' => 'http://www.hhs.gov/dab/',
        ),
      ),
    ),
    'field_logo_or_seal' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => '0a3da306-94a8-417b-943f-fc29f413de87',
    ),
  );
  $terms[] = array(
    'name' => 'National Birth Defects Prevention Month',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '717b84ba-0ff1-4d0a-b501-61f95654ea41',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Office for Civil Rights',
    'description' => '',
    'format' => 'full_html',
    'weight' => 12,
    'uuid' => '72091696-cdbd-4482-b374-21e72e51709d',
    'vocabulary_machine_name' => 'offices',
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'OCR',
          'format' => NULL,
          'safe_value' => 'OCR',
        ),
      ),
    ),
    'field_website_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://www.hhs.gov/ocr/office/',
          'format' => NULL,
          'safe_value' => 'http://www.hhs.gov/ocr/office/',
        ),
      ),
    ),
    'field_logo_or_seal' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => '0a3da306-94a8-417b-943f-fc29f413de87',
    ),
  );
  $terms[] = array(
    'name' => 'small business',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '72130cbd-f474-4888-97c1-bd21eb1bd99d',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Assistant Secretary for Global Affairs',
    'description' => '',
    'format' => 'full_html',
    'weight' => 4,
    'uuid' => '72b31025-f8e2-4f88-bf01-2a9ff69b8a6c',
    'vocabulary_machine_name' => 'offices',
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'ASGA',
          'format' => NULL,
          'safe_value' => 'ASGA',
        ),
      ),
    ),
    'field_website_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://www.hhs.gov/about/foa/osleadership/asga.html',
          'format' => NULL,
          'safe_value' => 'http://www.hhs.gov/about/foa/osleadership/asga.html',
        ),
      ),
    ),
    'field_logo_or_seal' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => '0a3da306-94a8-417b-943f-fc29f413de87',
    ),
  );
  $terms[] = array(
    'name' => 'Valerie Jarrett',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '72e1eccd-3a70-4024-8526-51f168ea57fa',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Valerie',
          'format' => NULL,
          'safe_value' => 'Valerie',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Jarrett',
          'format' => NULL,
          'safe_value' => 'Jarrett',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'Senior Advisor and Assistant to the President for Intergovernmental Affairs and Public Engagement, The White House',
          'format' => NULL,
          'safe_value' => 'Senior Advisor and Assistant to the President for Intergovernmental Affairs and Public Engagement, The White House',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Tom Frieden',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '730a757e-ef32-4261-b316-65da126fb3b1',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Tom',
          'format' => NULL,
          'safe_value' => 'Tom',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Frieden',
          'format' => NULL,
          'safe_value' => 'Frieden',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'MD, MPH, CDC Director',
          'format' => NULL,
          'safe_value' => 'MD, MPH, CDC Director',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'long-term care',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '7384cdbb-66f8-4be5-9ef7-4d409bc46d42',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Assistant Secretary for Planning and Evaluation',
    'description' => '',
    'format' => 'full_html',
    'weight' => 7,
    'uuid' => '762e8f24-38b3-41ba-a0f3-2fe6bc735dd3',
    'vocabulary_machine_name' => 'offices',
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'ASPE',
          'format' => NULL,
          'safe_value' => 'ASPE',
        ),
      ),
    ),
    'field_website_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://aspe.hhs.gov/',
          'format' => NULL,
          'safe_value' => 'http://aspe.hhs.gov/',
        ),
      ),
    ),
    'field_logo_or_seal' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => '0a3da306-94a8-417b-943f-fc29f413de87',
    ),
  );
  $terms[] = array(
    'name' => 'CHIP',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7642161d-781b-4fca-ba8d-0101ec8820bb',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'HITECH',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '766f3a34-3353-440b-97ba-c4c567a271e6',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'mental health',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '7671c2bc-3091-48c6-a7ff-ff8616409f35',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Jesus Garcia',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '768d5a0f-ce78-4244-9cd7-ca929bd0ef05',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Jesus',
          'format' => NULL,
          'safe_value' => 'Jesus',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Garcia',
          'format' => NULL,
          'safe_value' => 'Garcia',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'Special Assistant, Administration for Children and Families (ACF)',
          'format' => NULL,
          'safe_value' => 'Special Assistant, Administration for Children and Families (ACF)',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'open data',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '77fe0f72-1aa5-4c85-9386-7392cda95a2d',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Alan Shannon',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '78d05d6a-8c73-438a-b9fc-cf9b5ed2fc63',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Alan',
          'format' => NULL,
          'safe_value' => 'Alan',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Shannon',
          'format' => NULL,
          'safe_value' => 'Shannon',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'Public Affairs Director, Midwest Region, USDA Food and Nutrition Service',
          'format' => NULL,
          'safe_value' => 'Public Affairs Director, Midwest Region, USDA Food and Nutrition Service',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Elizabeth Perez',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '7975e957-7f57-4d28-bbec-fdfcc5e7c14f',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Elizabeth',
          'format' => NULL,
          'safe_value' => 'Elizabeth',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Perez',
          'format' => NULL,
          'safe_value' => 'Perez',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'Public Health Advisor, Substance Abuse and Mental Health Services Administration, Office of Communications',
          'format' => NULL,
          'safe_value' => 'Public Health Advisor, Substance Abuse and Mental Health Services Administration, Office of Communications',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'women',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7e6bd913-8976-49ac-bea6-d9937dd626c6',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'suicide prevention',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '7ed340ab-5ac8-4262-950f-b2b0b5b95571',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'fitness',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '80407ba1-6a98-4624-94a6-6b1e7d0628f5',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Marketplace',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '80c579a5-bada-4173-a199-d3703b86a4fc',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Emergency Preparedness & Response',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '80c7491b-ebf5-4234-87d7-ee71fabcda4a',
    'vocabulary_machine_name' => 'categories',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'StopBullying.gov Blog',
    'description' => '',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => '8176a9fb-8e4b-4c38-89e0-94470a2ff90d',
    'vocabulary_machine_name' => 'external_blog_sites',
    'field_homepage_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://www.stopbullying.gov/blog/',
          'format' => NULL,
          'safe_value' => 'http://www.stopbullying.gov/blog/',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'birth defects',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '81cae543-b385-4325-8b5b-2759fdb89909',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Office of Inspector General',
    'description' => '',
    'format' => 'full_html',
    'weight' => 14,
    'uuid' => '81e5947e-9d02-4f86-912f-bf66ee9f9609',
    'vocabulary_machine_name' => 'offices',
    'field_acronym' => array(),
    'field_website_url' => array(
      'und' => array(
        0 => array(
          'value' => 'https://oig.hhs.gov/',
          'format' => NULL,
          'safe_value' => 'https://oig.hhs.gov/',
        ),
      ),
    ),
    'field_logo_or_seal' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => '0a3da306-94a8-417b-943f-fc29f413de87',
    ),
  );
  $terms[] = array(
    'name' => 'HIPAA',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '842404bd-c1ca-4ae6-bdbf-885f34245df2',
    'vocabulary_machine_name' => 'categories',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'covered entities',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '853b453d-29c1-465b-b2a5-0bc379b2f4c5',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Alaska Native',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '856d88d7-7ee0-4807-9e6c-e34e4a64a84e',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'partnership',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '85ef2ad6-d9b8-4dee-881e-097498446348',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Affordable Care Act',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '890b6571-fe89-455d-95cb-b1df9f7e0f92',
    'vocabulary_machine_name' => 'categories',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Cecilia Muñoz',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '8de492be-df6e-4bba-af34-6aa7d4e40d1c',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Cecilia',
          'format' => NULL,
          'safe_value' => 'Cecilia',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Muñoz',
          'format' => NULL,
          'safe_value' => 'Muñoz',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'Director, White House Domestic Policy Council',
          'format' => NULL,
          'safe_value' => 'Director, White House Domestic Policy Council',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'disease',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '90ff3359-39c2-44e5-9f5c-8b2615308a05',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'innovation',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '92b2e924-d6f5-469c-a4bf-ed5b425f54a2',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'early learning',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '93474662-bd67-4ae8-b693-3e449b1c2de3',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'bullying',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '93a47962-bc45-46f8-8c8a-aed7800f79c2',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Bullying Prevention Awareness Month',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '947d1961-57da-4546-95d2-86ae39780046',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Elinore F. McCance-Katz',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '948eea20-af21-409b-a167-b07dd44a8830',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Elinore F.',
          'format' => NULL,
          'safe_value' => 'Elinore F.',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'McCance-Katz',
          'format' => NULL,
          'safe_value' => 'McCance-Katz',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'M.D., Ph.D., FAAAP, Chief Medical Officer, Substance Abuse and Mental Health Services Administration',
          'format' => NULL,
          'safe_value' => 'M.D., Ph.D., FAAAP, Chief Medical Officer, Substance Abuse and Mental Health Services Administration',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'sight',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9706dddf-d279-4e4d-bd17-46f743e4a9c2',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'tobacco',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '9716ad5d-7213-478f-9e29-9519e4ca7039',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'HealthCare.gov Blog',
    'description' => '',
    'format' => 'full_html',
    'weight' => 13,
    'uuid' => '99f2b704-f926-4e26-98d8-5f0306e54bac',
    'vocabulary_machine_name' => 'external_blog_sites',
    'field_homepage_url' => array(
      'und' => array(
        0 => array(
          'value' => 'https://www.healthcare.gov/blog/',
          'format' => NULL,
          'safe_value' => 'https://www.healthcare.gov/blog/',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'AIDS.gov Blog',
    'description' => '',
    'format' => 'full_html',
    'weight' => 7,
    'uuid' => '9bb22fe9-2b9a-434c-97e6-d2ff1df006a3',
    'vocabulary_machine_name' => 'external_blog_sites',
    'field_homepage_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://blog.aids.gov/',
          'format' => NULL,
          'safe_value' => 'http://blog.aids.gov/',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Lung Cancer Awareness Month',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9d2e50f1-4afc-4961-8de7-c7357d94d52d',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'health diplomacy',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '9f4b2e6b-178a-4d7e-991c-d338519232d7',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Congress',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a18a577c-7a2d-4827-9932-9dce11dafcf3',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Let’s Move Blog',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'a26c0b4d-03f4-400d-9477-2e1530b3d286',
    'vocabulary_machine_name' => 'external_blog_sites',
    'field_homepage_url' => array(),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Rusk Elatassi',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'a3a865c1-975e-4b6e-a3bb-adbc0571ef6f',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Rusk',
          'format' => NULL,
          'safe_value' => 'Rusk',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Elatassi',
          'format' => NULL,
          'safe_value' => 'Elatassi',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => '37, Houston',
          'format' => NULL,
          'safe_value' => '37, Houston',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'homeless',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a3a8f09f-44db-4039-9259-b0a768693b82',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Substance Abuse and Mental Health Services Administration',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 29,
    'uuid' => 'a3b537f8-7245-4366-95c1-401b18db5811',
    'vocabulary_machine_name' => 'offices',
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'SAMHSA',
          'format' => NULL,
          'safe_value' => 'SAMHSA',
        ),
      ),
    ),
    'field_website_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://www.samhsa.gov/',
          'format' => NULL,
          'safe_value' => 'http://www.samhsa.gov/',
        ),
      ),
    ),
    'field_logo_or_seal' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Medicaid expansion',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'a40df33b-6def-4542-8c34-4d51d44664f7',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Health Resources and Services Administration',
    'description' => '',
    'format' => 'full_html',
    'weight' => 26,
    'uuid' => 'a6147941-a31a-43ac-bd96-df2bdca484c6',
    'vocabulary_machine_name' => 'offices',
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'HRSA',
          'format' => NULL,
          'safe_value' => 'HRSA',
        ),
      ),
    ),
    'field_website_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://www.hrsa.gov/index.html',
          'format' => NULL,
          'safe_value' => 'http://www.hrsa.gov/index.html',
        ),
      ),
    ),
    'field_logo_or_seal' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'young adults',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'a73722de-5ef0-47a7-b1ef-a85d6c320232',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Exchange Visitor Program',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'a8a32643-709a-4aef-9151-8374cd87ee07',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'families',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a95cf99d-2f4a-4b82-a093-4fc1613f3591',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'food safety',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'a9c892c2-b88f-4f8b-aaf4-c3000ad346c4',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Special Enrollment Period',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'aae91160-ef73-44cb-be3a-040386c531ff',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Family Health History Day',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ab0dd736-bd78-4c0b-9281-bf171a7ae7ab',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Mental Illness Awareness Week',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ac923b8e-5574-46a2-b212-ce81be9ffecc',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Research',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'aced9ad0-bccf-4f59-8e4b-831e949b1326',
    'vocabulary_machine_name' => 'categories',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'HIV',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ad67cc07-f504-45d8-994e-8971b53efef9',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'older Americans',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ad987429-6bb5-4e0b-bc5e-0d1ef36a3ffe',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Sulava Gautam',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ad9e164c-60cb-4b50-96ee-702596551f8a',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Sulava',
          'format' => NULL,
          'safe_value' => 'Sulava',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Gautam',
          'format' => NULL,
          'safe_value' => 'Gautam',
        ),
      ),
    ),
    'field_author_title' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'sleep',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ae31347c-f42c-464c-8ec4-db33fac867bb',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Rachel F',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ae711c3e-794d-45ff-8674-e88dda40e780',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Rachel',
          'format' => NULL,
          'safe_value' => 'Rachel',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'F',
          'format' => NULL,
          'safe_value' => 'F',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'North Carolina',
          'format' => NULL,
          'safe_value' => 'North Carolina',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'AAPI health',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'b174fb75-d157-4b6a-bead-c486c009d42a',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Holidays & Observances',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'b1e4fa3c-57df-448b-9a2a-e70799daa390',
    'vocabulary_machine_name' => 'categories',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'NIH Director’s Blog',
    'description' => '',
    'format' => 'full_html',
    'weight' => 3,
    'uuid' => 'b3e455e4-352e-4569-946f-1c8dc7b66543',
    'vocabulary_machine_name' => 'external_blog_sites',
    'field_homepage_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://directorsblog.nih.gov/',
          'format' => NULL,
          'safe_value' => 'http://directorsblog.nih.gov/',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'domestic violence',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'b5299343-aa53-4652-9abd-3389e19bbbc1',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Huffington Post',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'b68b16cc-0723-4a03-86ec-99af7b80fd44',
    'vocabulary_machine_name' => 'external_blog_sites',
    'field_homepage_url' => array(),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Flu',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b725f7cc-948d-48e2-afcf-ed5d1616ff97',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Rhett Buttle',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'b7983d52-ef91-4cfd-986d-97277a10a6c1',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Rhett',
          'format' => NULL,
          'safe_value' => 'Rhett',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Buttle',
          'format' => NULL,
          'safe_value' => 'Buttle',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'Private Sector Engagement',
          'format' => NULL,
          'safe_value' => 'Private Sector Engagement',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'stress',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'bb8e8203-01a1-4883-8f6a-a8bcc19b1cca',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Centers for Medicare and Medicaid Services',
    'description' => '',
    'format' => 'full_html',
    'weight' => 24,
    'uuid' => 'bbac9cbc-d635-4a60-bae2-33497532f580',
    'vocabulary_machine_name' => 'offices',
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'CMS',
          'format' => NULL,
          'safe_value' => 'CMS',
        ),
      ),
    ),
    'field_website_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://cms.hhs.gov/',
          'format' => NULL,
          'safe_value' => 'http://cms.hhs.gov/',
        ),
      ),
    ),
    'field_logo_or_seal' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'natural disasters',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'be0ca355-0ee6-443d-a1ba-60bbb038daf6',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'drug abuse',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'bf677400-0e1c-4c99-ae87-0607eb480232',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Matt Fiedler',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'c148cca8-5d66-4cb4-ada1-703c1181b501',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Matt',
          'format' => NULL,
          'safe_value' => 'Matt',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Fiedler ',
          'format' => NULL,
          'safe_value' => 'Fiedler ',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'Senior Economist, Council of Economic Advisers',
          'format' => NULL,
          'safe_value' => 'Senior Economist, Council of Economic Advisers',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'adoption',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'c195649b-374b-4d43-b02f-852326bb8e27',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Medicaid',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c20afd23-d8e2-4845-833a-6d387bc9985b',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'LT Tala Hooban',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'c27212be-dde9-47d0-bfea-4c44b6d6553a',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'LT Tala',
          'format' => NULL,
          'safe_value' => 'LT Tala',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Hooban',
          'format' => NULL,
          'safe_value' => 'Hooban',
        ),
      ),
    ),
    'field_author_title' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Heart Month',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'c3689963-361b-4838-bad0-9f96f9d9680e',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'HealthCare.gov',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c50197a5-f3ed-4e8f-82e4-d5f23cb9fd5f',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'food',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c5567556-a286-4238-ae3b-3e500282b235',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'lung cancer',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c585d05c-6c57-4762-835f-a9b9bfe36be5',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Dr. Nora Volkow',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'c5ce32ce-841e-45fe-b78e-55e7f2d690e2',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Dr. Nora',
          'format' => NULL,
          'safe_value' => 'Dr. Nora',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Volkow',
          'format' => NULL,
          'safe_value' => 'Volkow',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'Director, National Institute on Drug Abuse (NIDA)',
          'format' => NULL,
          'safe_value' => 'Director, National Institute on Drug Abuse (NIDA)',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Mental Health & Substance Abuse',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'c5f792a8-2e7b-4e64-be76-82031b0e36c2',
    'vocabulary_machine_name' => 'categories',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'hurricane preparedness',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'c605d483-aba8-468e-8566-15c150e4086d',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Ebola',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c78ba6b2-fcc3-4ee9-b1de-b444936a4a70',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'National Influenza Vaccination Week',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c7989716-3b36-4e1e-8bb6-7fc4bde80881',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Center for Faith-Based and Neighborhood Partnerships',
    'description' => '',
    'format' => 'full_html',
    'weight' => 10,
    'uuid' => 'c813e720-1b39-416e-9023-f2d299ef763b',
    'vocabulary_machine_name' => 'offices',
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'CFBNP',
          'format' => NULL,
          'safe_value' => 'CFBNP',
        ),
      ),
    ),
    'field_website_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://www.hhs.gov/partnerships/',
          'format' => NULL,
          'safe_value' => 'http://www.hhs.gov/partnerships/',
        ),
      ),
    ),
    'field_logo_or_seal' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => '0a3da306-94a8-417b-943f-fc29f413de87',
    ),
  );
  $terms[] = array(
    'name' => 'Marylouise Kelley',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'cb1e984e-72ad-4fc8-bb68-a53a7959cfc1',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Marylouise',
          'format' => NULL,
          'safe_value' => 'Marylouise',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Kelley',
          'format' => NULL,
          'safe_value' => 'Kelley',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'Ph.D., Director, Family Violence Prevention and Services Program, Family and Youth Services Bureau, Administration for Children and Families',
          'format' => NULL,
          'safe_value' => 'Ph.D., Director, Family Violence Prevention and Services Program, Family and Youth Services Bureau, Administration for Children and Families',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'FoodSafety.gov Blog',
    'description' => '',
    'format' => 'full_html',
    'weight' => 10,
    'uuid' => 'cbfb03df-514a-413c-9a96-3dfeafa9f29f',
    'vocabulary_machine_name' => 'external_blog_sites',
    'field_homepage_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://www.foodsafety.gov/blog',
          'format' => NULL,
          'safe_value' => 'http://www.foodsafety.gov/blog',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Office of Inspector General',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ccb6ef14-e814-49b7-8e78-b72048704131',
    'vocabulary_machine_name' => 'offices',
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'OIG',
          'format' => NULL,
          'safe_value' => 'OIG',
        ),
      ),
    ),
    'field_website_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://oig.hhs.gov/',
          'format' => NULL,
          'safe_value' => 'http://oig.hhs.gov/',
        ),
      ),
    ),
    'field_logo_or_seal' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => '0a3da306-94a8-417b-943f-fc29f413de87',
    ),
  );
  $terms[] = array(
    'name' => 'seniors',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ccc150e0-d361-404b-9158-a4e77858dd18',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Programs for Families & Children',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ce76c5fd-668e-462d-905d-c6108635ddfb',
    'vocabulary_machine_name' => 'categories',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'LGBT health',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ceb172d9-9af5-4351-b41f-9be1c304bc15',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'caregivers',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'd1e9be9f-4001-4978-8d95-ca1b114f553f',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Assistant Secretary for Public Affairs',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 9,
    'uuid' => 'd1f7eef9-32df-47fc-8215-75c5f51785da',
    'vocabulary_machine_name' => 'offices',
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'ASPA',
          'format' => NULL,
          'safe_value' => 'ASPA',
        ),
      ),
    ),
    'field_website_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://www.hhs.gov/aspa/',
          'format' => NULL,
          'safe_value' => 'http://www.hhs.gov/aspa/',
        ),
      ),
    ),
    'field_logo_or_seal' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => '0a3da306-94a8-417b-943f-fc29f413de87',
    ),
  );
  $terms[] = array(
    'name' => 'Ali Kurnaz',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'd2948c92-455c-4181-9885-a7b6234a180b',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Ali',
          'format' => NULL,
          'safe_value' => 'Ali',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Karnaz',
          'format' => NULL,
          'safe_value' => 'Karnaz',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => '23, Orlando, Florida',
          'format' => NULL,
          'safe_value' => '23, Orlando, Florida',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Office of Intergovernmental and External Affairs',
    'description' => '',
    'format' => 'full_html',
    'weight' => 15,
    'uuid' => 'd370a211-1d70-420f-be5a-6695e74be48d',
    'vocabulary_machine_name' => 'offices',
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'IEA',
          'format' => NULL,
          'safe_value' => 'IEA',
        ),
      ),
    ),
    'field_website_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://www.hhs.gov/iea/',
          'format' => NULL,
          'safe_value' => 'http://www.hhs.gov/iea/',
        ),
      ),
    ),
    'field_logo_or_seal' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => '0a3da306-94a8-417b-943f-fc29f413de87',
    ),
  );
  $terms[] = array(
    'name' => 'Michael Twery',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'd3aa090e-8179-4315-b54b-1ae7150b652b',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Michael',
          'format' => NULL,
          'safe_value' => 'Michael',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Twery',
          'format' => NULL,
          'safe_value' => 'Twery',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'Ph.D., Director, National Center on Sleep Disorders Research, the National Heart, Lung, and Blood Institute',
          'format' => NULL,
          'safe_value' => 'Ph.D., Director, National Center on Sleep Disorders Research, the National Heart, Lung, and Blood Institute',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Susan Shain',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'd479f8f0-e4cd-4cd3-a1fc-22e48119f534',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Susan',
          'format' => NULL,
          'safe_value' => 'Susan',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Shain',
          'format' => NULL,
          'safe_value' => 'Shain',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => '28, Ketchikan, Alaska',
          'format' => NULL,
          'safe_value' => '28, Ketchikan, Alaska',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'minority health',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'd52558da-8dc1-41f9-81a4-57043212cc69',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'military families',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'd6646560-d16a-4c49-bec9-9511e7e98901',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Health Insurance Marketplace',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd6d89772-c389-4e6b-aacb-c0285eb35d5b',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'caregiver',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd8ecbf51-76bb-4a87-92f7-d5ba56fca879',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Paolo del Vecchio',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'd9237613-ac9d-4e7b-bf88-0a5311fd7fac',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Paolo del',
          'format' => NULL,
          'safe_value' => 'Paolo del',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Vecchio',
          'format' => NULL,
          'safe_value' => 'Vecchio',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'M.S.W., Director, Center for Mental Health Services, Substance Abuse and Mental Health Services Administration',
          'format' => NULL,
          'safe_value' => 'M.S.W., Director, Center for Mental Health Services, Substance Abuse and Mental Health Services Administration',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'AIDS',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'd9c78569-8b5d-4c21-a902-987228ed51b4',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Nora Super',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'dab48717-84fb-4625-971a-831230c5c727',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Nora',
          'format' => NULL,
          'safe_value' => 'Nora',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Super',
          'format' => NULL,
          'safe_value' => 'Super',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'Executive Director, White House Conference on Aging',
          'format' => NULL,
          'safe_value' => 'Executive Director, White House Conference on Aging',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Karen DeSalvo',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'dc2ca4a4-3b20-4c0a-b59e-212aeb0047dc',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Karen',
          'format' => NULL,
          'safe_value' => 'Karen',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'DeSalvo',
          'format' => NULL,
          'safe_value' => 'DeSalvo',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'M.D., Acting Assistant Secretary for Health (ASH)',
          'format' => NULL,
          'safe_value' => 'M.D., Acting Assistant Secretary for Health (ASH)',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'disabilities',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'dc4246a1-c77e-4e5b-ad6b-e55b139c729e',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'MentalHealth.gov Blog',
    'description' => '',
    'format' => 'full_html',
    'weight' => 4,
    'uuid' => 'dda1fcd5-6870-4dc3-8e42-8325377f30fb',
    'vocabulary_machine_name' => 'external_blog_sites',
    'field_homepage_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://www.mentalhealth.gov/blog/',
          'format' => NULL,
          'safe_value' => 'http://www.mentalhealth.gov/blog/',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'CDC Director Blog',
    'description' => '',
    'format' => 'full_html',
    'weight' => 6,
    'uuid' => 'de3946ed-655c-4a18-8a02-3bbcc2657801',
    'vocabulary_machine_name' => 'external_blog_sites',
    'field_homepage_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://blogs.cdc.gov/cdcdirector/',
          'format' => NULL,
          'safe_value' => 'http://blogs.cdc.gov/cdcdirector/',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'vaccines',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'de5dff34-ba8d-428f-b989-44493f24c725',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'RADM Boris D. Lushniak',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'deaaf058-3c61-4922-ba93-cda0594a7fa9',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'RADM Boris D.',
          'format' => NULL,
          'safe_value' => 'RADM Boris D.',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Lushniak',
          'format' => NULL,
          'safe_value' => 'Lushniak',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'MD, MPH, Acting U.S. Surgeon General',
          'format' => NULL,
          'safe_value' => 'MD, MPH, Acting U.S. Surgeon General',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Cara James',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'e097306b-82ef-4638-8a96-99a31dc63867',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Cara',
          'format' => NULL,
          'safe_value' => 'Cara',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'James',
          'format' => NULL,
          'safe_value' => 'James',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'Director, Office of Minority Health, Centers for Medicare and Medicaid Services (CMS) ',
          'format' => NULL,
          'safe_value' => 'Director, Office of Minority Health, Centers for Medicare and Medicaid Services (CMS) ',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'National Adoption Month',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e24adadc-ee3f-435a-baa3-a2bda8c03fbf',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'IHS Director’s Blog',
    'description' => '',
    'format' => 'full_html',
    'weight' => 11,
    'uuid' => 'e24be80c-8712-4d4a-a2e9-1f2fb24d83cc',
    'vocabulary_machine_name' => 'external_blog_sites',
    'field_homepage_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://www.ihs.gov/newsroom/directorsblog/',
          'format' => NULL,
          'safe_value' => 'http://www.ihs.gov/newsroom/directorsblog/',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'James Jackson',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'e44bab98-5188-4f8d-823a-95b1c0f4e846',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'James',
          'format' => NULL,
          'safe_value' => 'James',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Jackson',
          'format' => NULL,
          'safe_value' => 'Jackson',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => '30, Pensacola, Florida ',
          'format' => NULL,
          'safe_value' => '30, Pensacola, Florida ',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Health IT',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'e58f89aa-14f6-4380-be1b-257cdd2fa861',
    'vocabulary_machine_name' => 'categories',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Elena Miller-TerKuile',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'e60fb53a-6b90-46f8-a21c-b2020f2edf46',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Elena',
          'format' => NULL,
          'safe_value' => 'Elena',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Miller-TerKuile',
          'format' => NULL,
          'safe_value' => 'Miller-TerKuile',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => '27, La Jara, Colorado',
          'format' => NULL,
          'safe_value' => '27, La Jara, Colorado',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Public Health & Safety',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'e736a216-19ac-4346-bf94-813fe7fe34a6',
    'vocabulary_machine_name' => 'categories',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Kyle Evans',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'e792e329-1739-468e-8a59-3c50ffa51fe8',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Kyle ',
          'format' => NULL,
          'safe_value' => 'Kyle ',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Evans',
          'format' => NULL,
          'safe_value' => 'Evans',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'Schertz, TX',
          'format' => NULL,
          'safe_value' => 'Schertz, TX',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Earnest Evans, 59, and Sharon Evans, 57',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'e7d52a75-62d9-4ce2-8925-e87cd69d8a9b',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Earnest Evans, 59,',
          'format' => NULL,
          'safe_value' => 'Earnest Evans, 59,',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'and Sharon Evans, 57',
          'format' => NULL,
          'safe_value' => 'and Sharon Evans, 57',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'Chicago',
          'format' => NULL,
          'safe_value' => 'Chicago',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Barry Walsh',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'e8183111-ae50-4a33-bbcb-63bf6523d760',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Barry',
          'format' => NULL,
          'safe_value' => 'Barry',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Walsh',
          'format' => NULL,
          'safe_value' => 'Walsh',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => '61, Nashville',
          'format' => NULL,
          'safe_value' => '61, Nashville',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'HHS Health Care Blog',
    'description' => '',
    'format' => 'full_html',
    'weight' => 12,
    'uuid' => 'e86cf0b2-fc1a-4d71-9d47-b60523aeb44a',
    'vocabulary_machine_name' => 'external_blog_sites',
    'field_homepage_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://www.hhs.gov/healthcare/facts/blog/index.html',
          'format' => NULL,
          'safe_value' => 'http://www.hhs.gov/healthcare/facts/blog/index.html',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'David Moyer',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'e9094b8c-a5ce-4d29-9d44-4aab3d84fd5c',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'David',
          'format' => NULL,
          'safe_value' => 'David',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Moyer',
          'format' => NULL,
          'safe_value' => 'Moyer',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => '32, Westwood, New Jersey',
          'format' => NULL,
          'safe_value' => '32, Westwood, New Jersey',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Darren DeWalt',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'eaa5f5f7-0cdd-4641-ba47-a19385efc414',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Darren',
          'format' => NULL,
          'safe_value' => 'Darren',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'DeWalt',
          'format' => NULL,
          'safe_value' => 'DeWalt',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'MD, MPH, Director of the Learning and Diffusion Group, CMS Innovation Center and Paul McGann, MD, Co-Director of the Transforming Clinical Practice Initiative',
          'format' => NULL,
          'safe_value' => 'MD, MPH, Director of the Learning and Diffusion Group, CMS Innovation Center and Paul McGann, MD, Co-Director of the Transforming Clinical Practice Initiative',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Native American health',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'eb1cc29b-f072-4f60-ab90-5a30424fb0ef',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'influenza',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'eba13d7b-3124-49d3-b269-e1560db3eae4',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Marla Hendriksson',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ee61bbea-ebd9-4e3e-8692-c1561c19ef7b',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Marla',
          'format' => NULL,
          'safe_value' => 'Marla',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Hendriksson',
          'format' => NULL,
          'safe_value' => 'Hendriksson',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'M.P.M., Director, Office of Communications, Substance Abuse and Mental Health Services Administration',
          'format' => NULL,
          'safe_value' => 'M.P.M., Director, Office of Communications, Substance Abuse and Mental Health Services Administration',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Glaucoma',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ef75c3bd-9fc1-47ab-b0f3-4ad3cb1706d5',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Vision',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f07373ce-20d2-41f5-8311-16957878c3b9',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'science',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f07c0a25-8f6d-4429-8d1c-f4207dbd78f6',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Raina Thiele',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'f1481539-5ba4-41f1-bf06-07728664e29f',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Raina',
          'format' => NULL,
          'safe_value' => 'Raina',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Thiele',
          'format' => NULL,
          'safe_value' => 'Thiele',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'Associate Director, Intergovernmental Affairs, White House',
          'format' => NULL,
          'safe_value' => 'Associate Director, Intergovernmental Affairs, White House',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Jace Killsback',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'f2abeff6-6966-4582-a425-6732d13bb938',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Jace',
          'format' => NULL,
          'safe_value' => 'Jace',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Killsback',
          'format' => NULL,
          'safe_value' => 'Killsback',
        ),
      ),
    ),
    'field_author_title' => array(),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'health disparities',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'f4677fa7-01dd-4891-96c8-7779d909b916',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Office of the General Counsel',
    'description' => '',
    'format' => 'full_html',
    'weight' => 13,
    'uuid' => 'f476f70a-624b-41e8-888b-27e2aa6cb3ec',
    'vocabulary_machine_name' => 'offices',
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'OGC',
          'format' => NULL,
          'safe_value' => 'OGC',
        ),
      ),
    ),
    'field_website_url' => array(
      'und' => array(
        0 => array(
          'value' => 'http://www.hhs.gov/ogc/',
          'format' => NULL,
          'safe_value' => 'http://www.hhs.gov/ogc/',
        ),
      ),
    ),
    'field_logo_or_seal' => array(),
    'metatags' => array(),
    'parent' => array(
      0 => '0a3da306-94a8-417b-943f-fc29f413de87',
    ),
  );
  $terms[] = array(
    'name' => 'Sylvia Mathews Burwell',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'f48901c0-ed72-420e-9017-219d27ab55cd',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Sylvia Mathews',
          'format' => NULL,
          'safe_value' => 'Sylvia Mathews',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Burwell',
          'format' => NULL,
          'safe_value' => 'Burwell',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'HHS Secretary',
          'format' => NULL,
          'safe_value' => 'HHS Secretary',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'U.S. Department of Health and Human Services',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'f5e69816-0558-4f34-92cf-18e525f259cc',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'U.S. Department of Health and Human',
          'format' => NULL,
          'safe_value' => 'U.S. Department of Health and Human',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Services',
          'format' => NULL,
          'safe_value' => 'Services',
        ),
      ),
    ),
    'field_author_title' => array(),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'pregnancy',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f664171e-d74d-40d6-92c3-c1b5851c67a6',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Open Enrollment',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'f684c3dc-b51b-4cfd-ade1-ac613f3c845f',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Katie Gorscak',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'f6a870fd-6ac1-49ae-8e2b-f09fcdabd12d',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Katie',
          'format' => NULL,
          'safe_value' => 'Katie',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Gorscak',
          'format' => NULL,
          'safe_value' => 'Gorscak',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'U.S. Department of Health and Human Services',
          'format' => NULL,
          'safe_value' => 'U.S. Department of Health and Human Services',
        ),
      ),
    ),
    'metatags' => array(
      'und' => array(
        'robots' => array(
          'value' => array(
            0 => 0,
            'index' => 0,
            'follow' => 0,
            'noindex' => 0,
            'nofollow' => 0,
            'noarchive' => 0,
            'nosnippet' => 0,
            'noodp' => 0,
            'noydir' => 0,
            'noimageindex' => 0,
            'notranslate' => 0,
          ),
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'adults',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'fa04ba9d-b582-4d7b-91d7-7c7a8de6656a',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Judy Sarasohn',
    'description' => '',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => 'fb945361-b146-4322-90ec-4c675121c224',
    'vocabulary_machine_name' => 'authors',
    'field_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Judy',
          'format' => NULL,
          'safe_value' => 'Judy',
        ),
      ),
    ),
    'field_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Sarasohn',
          'format' => NULL,
          'safe_value' => 'Sarasohn',
        ),
      ),
    ),
    'field_author_title' => array(
      'und' => array(
        0 => array(
          'value' => 'Public Affairs, Department of Health and Human Services',
          'format' => NULL,
          'safe_value' => 'Public Affairs, Department of Health and Human Services',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'antibiotic resistance',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'fc06575f-308c-4a7e-a4fb-47a0b548aea3',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'screening',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'fc75c244-5cc1-45d4-93c3-ee53ceb1c252',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'diabetes',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'fd36b849-2e87-45f8-b209-a0347b5ab8cd',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Great American Smokeout',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'fe4f391f-a3a0-4135-a886-f83a1e40beff',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
  );
  return $terms;
}
