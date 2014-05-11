<?php
  $email = theme_get_setting('caffeinegeek_email_address');
  $rss = theme_get_setting('caffeinegeek_rss_url');
  $facebook = theme_get_setting('caffeinegeek_facebook_url');
  $twitter = theme_get_setting('caffeinegeek_twitter_url');
  $google_plus = theme_get_setting('caffeinegeek_google_plus_url');
  $instagram = theme_get_setting('caffeinegeek_instagram_url');
  $linkedin = theme_get_setting('caffeinegeek_linkedin_url');
  $youtube = theme_get_setting('caffeinegeek_youtube_url');
  $github = theme_get_setting('caffeinegeek_github_url');
  
  function social_site_link($url, $icon, $title, $class) {
  	$output = '';
  	if ($url) {
  		$icon_path = base_path() . path_to_theme() . '/images/icons/';
  		$output .= '<li class="contact-method social-site ' . $class . '">';
  		$output .= '<a title="' . $title . '" href="' . $url . '" target="_blank">';
  		$output .= '<img alt="' . $title . '" src="' . $icon_path . $icon . '" />';
  		$output .= '</a>';
  		$output .= '</li>';
  	}
  	return $output;
  }
  
  function contact_method_link($url, $icon, $title, $class) {
  	$output = '';
  	if ($url) {
  		$icon_path = base_path() . path_to_theme() . '/images/icons/';
  		$output .= '<li class="contact-method ' . $class . '">';
  		$output .= '<a title="' . $title . '" href="' . $url . '">';
  		$output .= '<img alt="' . $title . '" src="' . $icon_path . $icon . '" />';
  		$output .= '</a>';
  		$output .= '</li>';
  	}
  	return $output;
  }
  
  if ($email || $rss || $facebook || $twitter || $google_plus || $instagram || $linkedin || $youtube || $github):
?>
<div id="contact-info">
  <ul>

  <?php
    print render(social_site_link($facebook, 'facebook.png', 'Facebook', 'facebook'));
    print render(social_site_link($twitter, 'twitter.png', 'Twitter', 'twitter'));
    print render(social_site_link($google_plus, 'google-plus.png', 'Google+', 'google-plus'));
    print render(social_site_link($instagram, 'instagram.png', 'Instagram', 'instagram'));
    print render(social_site_link($linkedin, 'linkedin.png', 'LinkedIn', 'linkedin'));
    print render(social_site_link($youtube, 'youtube.png', 'YouTube', 'youtube'));
    print render(social_site_link($github, 'github.png', 'GitHub', 'github'));
    print render(contact_method_link($rss, 'rss.png', 'RSS', 'rss'));
    print render(contact_method_link($email, 'email.png', 'Email', 'email'));
  ?>
  
  </ul>
</div> <!-- /contact-info -->
<?php endif; ?>