<?php
/** 
 * @TITLE YouMeOS
 * @YOU OmniSelf
 * @open Open Sesame
 * @login Who... R U?
 * @BTN7 Save
 * @BTN8 Load Box
 * @DELETEBTN Remove<br/>Section
 * @blah
 */
class xYouMeOSLang {
	// Used for Complex values.
	var $_LANG = [
		'methods' => [ 
			'I' => [
				'col' => [[
					'col' => 'col-md-12',
					'type'  => 'bulletin',
					'html' 	=> [ 
						'h1' => [
							// 'i'	 => [
							// 	'class' => 'icon fa-3x pull-right',
							// 	'html' => '&#61698;'
							// ],
							'html' => 'Optimal Scope',
						],
						'blockquote' => 'Oversee your whole Web',
						'a' => [
							'html'  => '<i class="fa fa-sun-o"></i>',
							'class' => 'btn-info btn-lg btn-alt',
							'attr'  => [
								'data-toggle'  => 'modal', 
								'href'  => '#aboutYou'
							]
						]
					],
				]]
			],
			'omniSelf' => [
				'col' => [[
					'col'   => 'col-md-7',
					'type'  => 'bulletin',
					'html' 	=> [ 
						'h1' => [
							'i'	 => [
								'class' => 'icon fa-3x pull-right',
								'html' => '&#61925;'
							],
							'html' => 'OmniSelf',
						],
						'blockquote' => 'Organize your Spectrum',
						'a' => [
							'html'  => '<i class="fa fa-sun-o"></i>',
							'class' => 'btn-info btn-lg btn-alt',
							'attr'  => [
								'data-toggle'  => 'modal', 
								'href'  => '#aboutYou'
							]
						]
					],
				],[
					'col'   => 'col-md-5',
					'type'  => 'widget',
					'title' => 'Ongoing Projects',
					'widget'	=> [

					]
				]],
				'bulletin' => [
					'head' => 'Omni Self',
					'cover'=> '/img/skin-greenish.jpg',
					'icon' => ' <span class="icon pull-right fa-5x">&#61925;</span>',
					'quote'=> 'Control All Spheres',
					'BTN'	=> [
						'aboutYou'	=> [
							// 'html' => '<i class="fa fa-user"></i> &nbsp;',
							'data' => 'data-toggle="modal"', 
							'class' => 'btn-info btn-lg btn-alt',
							'href' => 'aboutYou'
						],
						// 'addSphere'	=> [
						// 	'html' => '<i class="fa fa-plus"></i> Add Sphere&nbsp;',
						// 	// 'data' => 'data-toggle="modal"', 
						// 	'class' => 'btn-info btn-lg btn-alt disable',
						// 	'href' => ''
						// ] 
					]
				],
				'bulletin' => [
					'head' => 'Omni Self',
					'cover'=> '/img/skin-greenish.jpg',
					'icon' => ' <span class="icon pull-right fa-5x">&#61925;</span>',
					// 'quote'=> 'Control All Spheres',
					'BTN'	=> [
						'aboutYou'	=> [
							// 'html' => '<i class="fa fa-user"></i> &nbsp;',
							'data' => 'data-toggle="modal"', 
							'class' => 'btn-info btn-lg btn-alt',
							'href' => 'aboutYou'
						],
						// 'addSphere'	=> [
						// 	'html' => '<i class="fa fa-plus"></i> Add Sphere&nbsp;',
						// 	// 'data' => 'data-toggle="modal"', 
						// 	'class' => 'btn-info btn-lg btn-alt disable',
						// 	'href' => ''
						// ] 
					]
				]
			],
			'aboutYou' => [
				'type'     => 'tabs',
				'title'    => 'OmniSelf',
				'icon'     => 'fa fa-user', 
				'class'		=> 'tile',
				// 'vertical' => true, 
				'menu'     => [[
					'title'    => 'Who',
					'icon'     => 'fa fa-user',
					'type'     => 'tabs', 
					'tip'    => 'Tell Me about You.',
					'active'   => true,
					'menu'     => [[
						'title'  => 'You',
						'icon'   => 'fa fa-user-md',
						'header' => 'Tell Me about You',
						'quote'  => 'q',
						'type'   => 'ajax',
						
						'active' => true, 
						'input'  => [ 
							
							'name' => [ 
								'txt'  => 'Given Name',
								'tip' => 'This is your legal name, known only to you, our internal records, and those with whom you choose to share it.',
								'icon' => 'fa fa-user-md',
								'col'  => 'col-md-4'
							], 
							'username' => [
								'txt'  => 'Unique Name',
								'tip' => 'This is your username, your alias, the name of your avatar, your Unique Universe.',
								// 'type' => 'radio',
								'icon' => 'fa fa-sun-o',
								'col'  => 'col-md-4'
							],
							'email'  => [
								'type' => 'email',
								'txt'  => 'Email',
								'tip' => 'This is your email address, the contact for this account.',
								// 'href' => 'https://dashboard.stripe.com/account/apikeys',
								'icon' => 'fa fa-envelope',
								'col'  => 'col-md-4',
							],
							'birthdate' => [
								'type' => '',
								'txt' => 'Date of Birth',
								'tip' => 'This is your date of birth, required to determine your eligibility for legal use of any website on the internet. We are concerned for your saftey. This is for internal purposes only, and will not be posted on your profile.',
								'icon' => '',
								'col'  => 'col-md-4',
							],
							'website' => [
								'type' => 'fields',
								'txt' => 'Your Website',
								'tip' => 'This is the URL of your personal website or blog to offer more insights about you to the Come-Unity and help promote your activities in the world.',
								'icon' => '',
								'col'  => 'col-md-4'
							],
							'title' => [
								'type' => '',
								'txt' => 'Your Title',
								'tip' => 'Please share your purposeful title. What are you here to do & BE for the world. 1-3 words. This is a title, not a sentence or individual words. Can be your primary profession or your visioned purpose or both combined. Ex: Networking Efficiency Guru OR Conscious Technologist OR Nomadic Ambassador OR Airline Pilot OR Welness Practitioner OR Business Development Consultant',
								'icon' => '',
								'col'  => 'col-md-4'
							],
							'team' => [
								'type' => '',
								'txt' => 'With or for whom do you work?',
								'tip' => 'Where or for whom do you fulfill this role? What company, organization or project are you working for or with? EX: Software Developer at Google. If you leave this blank then your title will be listed by itself.',
								'icon' => '',
								'col'  => 'col-md-4'
							],
							'desc' => [
								'col-md' => '12',
								'type'   => 'textarea',
								'txt'    => 'Describe Yourself',
								'tip' => 'How would you like to share yourself with other members of the UMEOS Come-Unity? What would you like them to know about you to instill a sense of trust, alignment, and comraderie?',
								// 'href'   => 'https://dashboard.stripe.com/account/apikeys',
								'icon'   => 'fa fa-key fa-rotate-90',
							],
						]
					],[
						'title'  => 'Account',
						'icon'   => 'fa fa-key',
						'header' => '',
						'quote'  => '',
						'type'   => 'ajax',

						'tip'    => 'Account',
						'input'  => [
								'test' => [
									'col' => 'col-md-12',
									'txt' => 'im inside',
									'tip' => 'im a tip'	
								],
								'tutor' => [

								// 'txt'  => 'Tutor',
								
								'type' => 'radio',
								'icon' => 'fa fa-graduation-cap',
								'col'  => 'col-md-12',
								'labels' => [
									[
										'txt' => 'Tutor',
										'value' => 'live',
										'tip'  => 'Turn on the Tutor'
									],
									[
										'txt' => 'Off',
										'value' => false,
										'tip'  => 'Turn off the Tutor'
									]
								]
							], 
							// ,
							// 'password'  => [
							// 	'type' => 'password',
							// 	'txt'  => 'Key',
							// 	'tip' => 'This is your password, the Key to your Universe.',
							// 	// 'href' => 'https://dashboard.stripe.com/account/apikeys',
							// 	'icon' => 'fa fa-key',
							// 	'col'  => 'col-md-4',
							// ]
						]
					]]
				],[
					'title' => 'Where',
					'icon' => 'fa fa-map-marker',
					'tip'    => 'Where you have been in the World?',
					'type' => 'tabs',
					'menu'	=> [[
						'title' => 'Status',
						'col' => 'col-md-4',
						'txt' => 'HOME or Roam?',
						'tip' => 'Do you have a primary place where you live, feel grounded, spend most of your time, and with whom you have deep connections and interactions? If you do not feel that you have a HOME right now but are continuously on the move, you may check the NOMADIC box instead. This locational information is important in helping the nexus match you to resources and events that are near you that you would be interested in knowing about, as well as in helping your nomadic friend be able to send a group message to all of his friends in Boulder, Colorado to let them know he will be in town for a week. Exact addresses are not required for this functionality, just general vicinity.',
						'input' => [
							'status_opt' => [
								'type' => 'radio',
								'menu' => [
									['value' => 'HAVE A HOME'],
									['value' => 'NOMADIC']
								]
							]
						]
					],[
						'title' => 'Home',
						'col' => 'col-md-4',
						'txt' => 'Where You call HOME',
						'tip' => 'What is the primary place where you live, feel grounded, spend most of your time, and with whom you have deep connections and interactions? If you do not feel that you have a HOME right now but are continuously on the move, you may check the NOMADIC box instead. This locational information is important in helping the nexus match you to resources and events that are near you that you would be interested in knowing about, as well as in helping your nomadic friend be able to send a group message to all of his friends in Boulder, Colorado to let them know he will be in town for a week. Exact addresses are not required for this functionality, just general vicinity.',
						'type' => 'ajax',
						'input' => [
							'country' => [
								'col' => 'col-md-4',
								'txt' => 'city',
								'tip' => 'The country you live in.'
							]
							'state' => [
								'col' => 'col-md-4',
								'txt' => 'state or province',
								'tip' => 'The state or province you live in.'
							]
							'city' => [
								'col' => 'col-md-4',
								'txt' => 'city',
								'tip' => 'The city you live in.'
							]	
						]
					],[
						'title' => 'Attachment Level',
						'col' => 'col-md-4',
						'txt' => 'Are you happy here?',
						'tip' => 'With regard to your HOME location. Which of the following options best describes how you feel about your current situation. This question helps the NEXUS to more closely match you to requests that might interest you based on whether or not you are likely to travel or stay for long term opportunities that might interest you. If you leave this blank then your location will be listed by itself.',
						'input' => [
							'attach_level' => [
								'type' => 'dropdown',
								'menu' => [
									['value' => 'Happily Grounded in...'],
									['value' => 'Living Intentionally in...'],
									['value' => 'Ready to Migrate from...'],
									['value' => 'Willing to Relocate from...'],
									['value' => 'Currently Seeking New Location while Biding my Time in...'],
									['value' => 'custom']
								]
							]
							'attach_level_custom' => [
								'txt' => 'Your Answer',
								'tip' => ''
							]
						]
						
						
						
					],[
						'title' => 'Location',
						'col' => 'col-md-4',
						'txt' => 'Your current Location',
						'tip' => 'Where are you right now? This is optional. Only most recent entry will show on profile unless you choose to make your Travel History public.',
					],[
						'title' => 'Nomad Satisfaction',
						'col' => 'col-md-4',
						'txt' => 'Are you happy on the move?',
						'tip' => 'With regard to your current location. Which of the following options best describes how you feel about your current situation. This question helps the NEXUS to more closely match you to requests that might interest you based on whether or not you are likely to travel or stay for long term opportunities that might interest you. If you leave this blank then your location will be listed by itself.',
					],[
						'title' => 'World View', 
					]]
				],[
					'title' => 'When',
					'icon'  => 'fa fa-clock-o',
					'tip'   => 'Important Dates in your Life',
					'menu'  => []
				],[
					'title' => 'What',
					'icon' => 'fa fa-compass',
					'tip'    => 'Content Substance',
					'menu'	=> [[
						'title' => 'Pulse',
						'active' => true,
						'icon' => 'fa fa-heart',
						'header'=> 'Explain the Blue Grid.',
						'quote' => 'Your PULSE magnetizes with the overall Heartbeat of the <a href="#/youMeOS/kinnexus" class="tooltips underline" data-toggle="tooltip" title="" data-original-title="The Nexus is your core to all communications">Nexus</a>, making this: Your Own System. Help the nexus help you find your community of action and the entities and projects with whom you resonate most. This is a dynamic field, ever changing, and you can update at any time to help the nexus stay current with your passions, focus, and outward expressions.',
						'tip' => 'Share the top 5 one-word qualities that best resonate with and most describe YOU right now.',
						'type' => 'jumbotron'
					],[
						'title' => 'Reflection',

						'icon' => 'fa fa-eye',
						'header'=> 'What are you seeking...',
						'quote' => 'Your REFLECTION shines back at you that which you seek. Influence how your audience targets your content by showing them what you require, and let the nexus make the match which reunites you with your reflection. Always dynamic, your needs may shift and change, and updating this field regularly keeps the nexus humming along on your behalf.',
						'tip' => 'Share the top 5 one-word qualities that best describe what You are currently seeking, in yourself, in your friends and collaborators, or in your personal endeavors.',
						'type' => 'jumbotron'
					]]
					],[
					'title' => 'Why',
					'icon'  => 'fa fa-road', 
					'tip'   => 'Motivation Sauce',
					'menu'	=> [[
						'title'  => 'Passion',
						'icon'   => 'fa fa-fire', 
						'active' => true,
						'header' => 'Inspiration comes from within...',
						'quote'  => 'Influence what naturally gravitates towards you. Please indicate the areas with which you resonate, which you are passionate about and deeply interested in learning more, spending time on, sharing, expounding upon, without any regard to your level of expertise. What do you LOVE and InJoy?',
						'tip' => 'Share the top 5 one-word qualities that best describe the Passions which inspire you.',
						'type'   => 'jumbotron'
					],[
						'title'  => 'Purpose',
						'icon'   => 'fa fa-star',
						'header' => 'Driving Momentum...',
						'quote'  => 'What is the PURPOSE which drives you forward? What you enter here will influence the force behind your Expansion. Let the nexus help you find other like-minded kin driven by the same purposes, motivated by the same desires and goals. Together we ceate synergy in symbiosis!',
						'select' => 'Share the top 5 one-word qualities that best describe what motivates YOU and gives you purpose.',
						'type' => 'jumbotron'
					]]
				],[
					'title' => 'How',
					'icon' => 'fa fa-question',
					'type' => 'tabs', 
					'tip'    => 'How you do that thing you do',
					'menu'	=> [[
						'title'   => 'Super Powers',
						'icon'    => 'fa fa-bolt',
						'header'  => 'Fuel the Engine!',
						'active' => true
						'quote'   => 'Let us acknowledge the gifts and offerings which make us unique and which we bring to the collective table! Be bold and declare the ways in which you shine! Your strengths add to the collective power of the overall engine and will help the nexus match you with KIN in need of those strengths.',
						'tip' => 'Share the top 5 one-word qualities which best describe the Strengths that are the Heart of your Power.',
						'type' => 'jumbotron'
					],[
						'title'   => 'Skills',
						'icon'    => '',
						'header'  => 'That thing you do',
						'quote'   => 'What are the Skills you have gleaned from your numerous turns around the sun?',
						'tip' => 'Our intent is for the NEXUS to help provide you with endorsements for these stated skills from confirmed and quality rated experts, but that phase of the PROJECT is still in Pre-Design stage. For now, please just list here some of the skills you have acquired throughout your journey. Although they may at times overlap, these can be differentiated from EXPERTISE in that SKILLS are more about knowing how to do certain things (perhaps without any credentials) like typing, using WordPress, and other specific tasks. EXPERTISE is more about knowing and understanding and having mastered an entire area of study. Please list one skill per entry.',
						'type' => 'jumbotron',
						'txt' => 'List Skill'
					],[
						'title' => 'Expertise',
						'icon'    => '',
						'header'  => 'How you Shine',	
						'quote'   => 'What subject matters do you study?'
						'tip' => 'You may enter any subject you want. This is optional but each entry should be a single subject and requires a LEVEL OF STUDY qualifier. This information does not assist the nexus without qualification.'
						'txt' => 'Subject of Study',
						'type' => ''
					],[
						'title' => 'Primary Category',
						'icon'    => '',
						'header'  => 'Areas of Focus',	
						'tip'   => 'Please tag this SUBJECT with as many of the following knowledge areas that you feel apply to your studies of this subject. Please do not tag indiscriminately. This is by no means an exhaustive list but it will help us to match you more efficiently to the resources you require. You may feel like a poly-math and that EVERYTHING you do falls into EVERY category, but that kind of tagging will just bog down the system and render out sorting useless. Please try to be accurate and choose the one or several knowledge areas that you feel this subject most fits into and would be most recognized as fitting into by the largest common denominator of people so that if someone is trying to find an expert in this field, it might occur to them to look first in these categories to see if this SUBJECT is listed.',
						'type' => 'dropdowns',
						'menu' => [
									['value' => 'Happily Grounded in...'],
									['value' => 'Living Intentionally in...'],
									['value' => 'Ready to Migrate from...'],
									['value' => 'Willing to Relocate from...'],
									['value' => 'Currently Seeking New Location while Biding my Time in...'],
									['value' => 'custom']
								]
					],[
						'title' => 'Level of Skill', 
					]]
				]]
			],
			'openSonix' => [
				'col' => [[
					'col' => 'col-md-9',
					'type' => 'bb',
					'title' => 'Bulletin Board',
					'bb' => [
						'type' => 'a',
						'a' => [[
							'class' => 'btn btn-alt btn-sm hidden-xs',
							'tip'   => 'Have a Question? Ask it!',
							
							'i' => [
								'class' => 'fa fa-question', 
								
								'html' => 'Topic',
								// 'small' => [
								// 	'class' => 'label label-success pull-right',
								// 	'html' => ' +5'
								// ]
							],
						],[
							'class' => 'btn btn-alt btn-sm hidden-xs',
							'tip'   => 'Have a Quote? Archive it!',
							
							'i' => [
								'class' => 'fa fa-quote-right',
								'html'  => 'Quote',
								// 'small' => [
								// 	'class' => 'label label-success pull-right',
								// 	'html' => ' +1'
								// ]
							]
						],[
							'class' => 'btn btn-alt btn-sm hidden-xs',
							'tip'   => 'ReQuest? Announce it!',
							'i' => [
								'class' => 'fa fa-bullhorn',
								'html' => 'Bulletin',
								// 'small' => [
								// 	'class' => 'label label-danger pull-right',
								// 	'html' => ' -5'
								// ]
							]
						],[
							'class' => 'btn btn-alt btn-sm hidden-xs',
							'tip'   => 'Back from a Quest? Tell us!',
							'i' => [
								'class' => 'fa fa-star-half-o',
								'html' => 'Testimonial',
								// 'small' => [
								// 	'class' => 'label label-success pull-right',
								// 	'html' => ' +10'
								// ]
							]
						]]
					]
				],[
					'col' => 'col-md-3',
					'type' => 'widget',
					'title' => 'Statistics',
					'widget' => [
						'div' => [
							'inc' => '../../X/xYouMeOS/_user_xstats.tpl'	
						]
					]
				],[
					'col' => 'col-md-5',
					'type' => 'widget',
					'title' => 'Community Forum'
				],[
					'col' => 'col-md-4',
					'type' => 'widget',
					'title' => 'Recent Activity',
				],[
					'col' => 'col-md-3',
					'type' => 'widget',
					'title' => 'Statistics',
				]]
			],
			'kinnexus' => [
				'bulletin' => [
					'head' => 'Orbiting Systems',
					'cover'=> 'kinnexus',
					'icon' => 'fa fa-ge',
					'quote'=> 'Welcome to the Kinnexus; Connect your dots, Empower your Center.',
					'BTN'	=> [
						'kinnexus'	=> [
							'html' => '<i class="fa fa-ge"></i> Add a Nexus &nbsp; ',
							'data' => 'data-toggle="modal"', 
							'class' => 'btn-info btn-lg btn-alt',
							'href' => 'addNexus'
						], 
						'settings'	=> [
							'html' => '<i class="fa fa-gear"></i> Settings &nbsp; ',
							'class' => 'btn-info btn-lg btn-alt'
						]
					]
				]
			]
		]
	];
}
?>
