###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    component(level=1,name='Geospatial'),
    meta(content='TripsModel.x3d',name='title'),
    meta(content='Individual trip locations and links, integrated as Inline into TripsAroundWorld.',name='description'),
    meta(content='Martin Reddy, SRI',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='22 April 2003',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://www.geovrml.org/examples',name='reference'),
    meta(content='X3D geospatial example',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Geospatial/TripsModel.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TripsModel.x3d'),
    Group(
      children=[
      GeoViewpoint(description='Model 1',orientation=(1.0,0.0,0.0,-1.57),position=(-22.9062,-43.1748,+5000100)),
      GeoMetadata(
        #  original GeoMetadata summary='"title" "Martin&apos;s Trips" "software" "text2geovrml (C) 2000 SRI International" "models" "46"' 
        metadata=MetadataSet(name='GeoMetadata.summary',reference='https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-CD/Part01/components/geospatial.html#GeoMetadata',
          value=[
          MetadataString(name='title',value=['Martin\'s Trips']),
          MetadataString(name='software',value=['text2geovrml (C) 2000 SRI International']),
          MetadataString(name='models',value=['46'])])),
      GeoLocation(geoCoords=(-22.9062,-43.1748,+50100),
        children=[
        Anchor(description='Rio De Janeiro',parameter=["target=_martinstrips"],url=["http://www.ai.sri.com/cgi-bin/show_img.pl?img=jpg/rio1.jpg"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 2',orientation=(1.0,0.0,0.0,-1.57),position=(20.9458,-86.8608,+5000100)),
      GeoLocation(geoCoords=(20.9458,-86.8608,+50100),
        children=[
        Anchor(description='Cancun',parameter=["target=_martinstrips"],url=["http://www.ai.sri.com/cgi-bin/show_img.pl?img=mx/mexico1.jpg"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 3',orientation=(1.0,0.0,0.0,-1.57),position=(20.9817,-89.6103,+5000100)),
      GeoLocation(geoCoords=(20.9817,-89.6103,+50100),
        children=[
        Anchor(description='Merida',parameter=["target=_martinstrips"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 4',orientation=(1.0,0.0,0.0,-1.57),position=(20.405,-89.53,+5000100)),
      GeoLocation(geoCoords=(20.405,-89.53,+50100),
        children=[
        Anchor(description='Uxmal',parameter=["target=_martinstrips"],url=["http://www.ai.sri.com/cgi-bin/show_img.pl?img=mx/mexico4.jpg"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 5',orientation=(1.0,0.0,0.0,-1.57),position=(28.5758,77.1958,+5000100)),
      GeoLocation(geoCoords=(28.5758,77.1958,+50100),
        children=[
        Anchor(description='New Delhi',parameter=["target=_martinstrips"],url=["http://www.ai.sri.com/cgi-bin/show_img.pl?img=jpg/hauz.jpg"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 6',orientation=(1.0,0.0,0.0,-1.57),position=(27.1892,78.0128,+5000100)),
      GeoLocation(geoCoords=(27.1892,78.0128,+50100),
        children=[
        Anchor(description='Agra',parameter=["target=_martinstrips"],url=["http://www.ai.sri.com/cgi-bin/show_img.pl?img=jpg/taj1.jpg"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 7',orientation=(1.0,0.0,0.0,-1.57),position=(25.3111,83.012,+5000100)),
      GeoLocation(geoCoords=(25.3111,83.012,+50100),
        children=[
        Anchor(description='Varanasi',parameter=["target=_martinstrips"],url=["http://www.ai.sri.com/cgi-bin/show_img.pl?img=jpg/ganga.jpg"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 8',orientation=(1.0,0.0,0.0,-1.57),position=(25.4438,78.5688,+5000100)),
      GeoLocation(geoCoords=(25.4438,78.5688,+50100),
        children=[
        Anchor(description='Khajuraho',parameter=["target=_martinstrips"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 9',orientation=(1.0,0.0,0.0,-1.57),position=(13.7342,100.5292,+5000100)),
      GeoLocation(geoCoords=(13.7342,100.5292,+50100),
        children=[
        Anchor(description='Bangkok',parameter=["target=_martinstrips"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 10',orientation=(1.0,0.0,0.0,-1.57),position=(22.2766,114.1525,+5000100)),
      GeoLocation(geoCoords=(22.2766,114.1525,+50100),
        children=[
        Anchor(description='Hong Kong',parameter=["target=_martinstrips"],url=["http://www.ai.sri.com/cgi-bin/show_img.pl?img=hk/night3.jpg"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 11',orientation=(1.0,0.0,0.0,-1.57),position=(22.19532,113.54744,+5000100)),
      GeoLocation(geoCoords=(22.19532,113.54744,+50100),
        children=[
        Anchor(description='Macau',parameter=["target=_martinstrips"],url=["http://www.ai.sri.com/cgi-bin/show_img.pl?img=hk/saopaulo.jpg"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 12',orientation=(1.0,0.0,0.0,-1.57),position=(-31.9397,115.7619,+5000100)),
      GeoLocation(geoCoords=(-31.9397,115.7619,+50100),
        children=[
        Anchor(description='Perth',parameter=["target=_martinstrips"],url=["http://www.ai.sri.com/cgi-bin/show_img.pl?img=oz/perthdad.jpg"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 13',orientation=(1.0,0.0,0.0,-1.57),position=(-23.7,133.8717,+5000100)),
      GeoLocation(geoCoords=(-23.7,133.8717,+50100),
        children=[
        Anchor(description='Alice Springs',parameter=["target=_martinstrips"],url=["http://www.ai.sri.com/cgi-bin/show_img.pl?img=oz/ayers1.jpg"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 14',orientation=(1.0,0.0,0.0,-1.57),position=(-34.9333,138.6,+5000100)),
      GeoLocation(geoCoords=(-34.9333,138.6,+50100),
        children=[
        Anchor(description='Adelaide',parameter=["target=_martinstrips"],url=["http://www.ai.sri.com/cgi-bin/show_img.pl?img=oz/adelaide.jpg"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 15',orientation=(1.0,0.0,0.0,-1.57),position=(-33.9689,151.1283,+5000100)),
      GeoLocation(geoCoords=(-33.9689,151.1283,+50100),
        children=[
        Anchor(description='Sydney',parameter=["target=_martinstrips"],url=["http://www.ai.sri.com/cgi-bin/show_img.pl?img=oz/opera2.jpg"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 16',orientation=(1.0,0.0,0.0,-1.57),position=(37.97,23.72,+5000100)),
      GeoLocation(geoCoords=(37.97,23.72,+50100),
        children=[
        Anchor(description='Athens',parameter=["target=_martinstrips"],url=["http://www.ai.sri.com/cgi-bin/show_img.pl?img=greece/athens.jpg"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 17',orientation=(1.0,0.0,0.0,-1.57),position=(35.2667,25.7167,+5000100)),
      GeoLocation(geoCoords=(35.2667,25.7167,+50100),
        children=[
        Anchor(description='Elounda',parameter=["target=_martinstrips"],url=["http://www.ai.sri.com/cgi-bin/show_img.pl?img=greece/Spin.gif"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 18',orientation=(1.0,0.0,0.0,-1.57),position=(36.129,-5.352,+5000100)),
      GeoLocation(geoCoords=(36.129,-5.352,+50100),
        children=[
        Anchor(description='Gibraltar',parameter=["target=_martinstrips"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 19',orientation=(1.0,0.0,0.0,-1.57),position=(48.85424,2.34486,+5000100)),
      GeoLocation(geoCoords=(48.85424,2.34486,+50100),
        children=[
        Anchor(description='Paris',parameter=["target=_martinstrips"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 20',orientation=(1.0,0.0,0.0,-1.57),position=(44.84138,1.75535,+5000100)),
      GeoLocation(geoCoords=(44.84138,1.75535,+50100),
        children=[
        Anchor(description='Padirac',parameter=["target=_martinstrips"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 21',orientation=(1.0,0.0,0.0,-1.57),position=(57.71622,-3.28994,+5000100)),
      GeoLocation(geoCoords=(57.71622,-3.28994,+50100),
        children=[
        Anchor(description='Lossiemouth',parameter=["target=_martinstrips"],url=["http://www.ai.sri.com/cgi-bin/show_img.pl?img=gif/Lossie/snowman1.gif"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 22',orientation=(1.0,0.0,0.0,-1.57),position=(55.85767,-4.24283,+5000100)),
      GeoLocation(geoCoords=(55.85767,-4.24283,+50100),
        children=[
        Anchor(description='Glasgow',parameter=["target=_martinstrips"],url=["http://www.ai.sri.com/cgi-bin/show_img.pl?img=gif/Strath/Nonsense.gif"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 23',orientation=(1.0,0.0,0.0,-1.57),position=(55.95381,-3.20087,+5000100)),
      GeoLocation(geoCoords=(55.95381,-3.20087,+50100),
        children=[
        Anchor(description='Edinburgh',parameter=["target=_martinstrips"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 24',orientation=(1.0,0.0,0.0,-1.57),position=(51.50595,-0.12689,+5000100)),
      GeoLocation(geoCoords=(51.50595,-0.12689,+50100),
        children=[
        Anchor(description='London',parameter=["target=_martinstrips"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 25',orientation=(1.0,0.0,0.0,-1.57),position=(51.88481,0.90342,+5000100)),
      GeoLocation(geoCoords=(51.88481,0.90342,+50100),
        children=[
        Anchor(description='Colchester',parameter=["target=_martinstrips"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 26',orientation=(1.0,0.0,0.0,-1.57),position=(54.77742,-1.573719,+5000100)),
      GeoLocation(geoCoords=(54.77742,-1.573719,+50100),
        children=[
        Anchor(description='Durham',parameter=["target=_martinstrips"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 27',orientation=(1.0,0.0,0.0,-1.57),position=(54.9921,-7.3116,+5000100)),
      GeoLocation(geoCoords=(54.9921,-7.3116,+50100),
        children=[
        Anchor(description='Derry',parameter=["target=_martinstrips"],url=["http://www.ai.sri.com/cgi-bin/show_img.pl?img=gif/NI/Gang.gif"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 28',orientation=(1.0,0.0,0.0,-1.57),position=(54.5938,-5.9231,+5000100)),
      GeoLocation(geoCoords=(54.5938,-5.9231,+50100),
        children=[
        Anchor(description='Belfast',parameter=["target=_martinstrips"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 29',orientation=(1.0,0.0,0.0,-1.57),position=(37.78572,-122.42142,+5000100)),
      GeoLocation(geoCoords=(37.78572,-122.42142,+50100),
        children=[
        Anchor(description='San Francisco CA',parameter=["target=_martinstrips"],url=["http://www.ai.sri.com/cgi-bin/show_img.pl?img=jpg/sfbay.jpg"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 30',orientation=(1.0,0.0,0.0,-1.57),position=(34.052207,-118.24344,+5000100)),
      GeoLocation(geoCoords=(34.052207,-118.24344,+50100),
        children=[
        Anchor(description='Los Angeles CA',parameter=["target=_martinstrips"],url=["http://www.ai.sri.com/cgi-bin/show_img.pl?img=jpg/cement.jpg"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 31',orientation=(1.0,0.0,0.0,-1.57),position=(37.893026,-119.581559,+5000100)),
      GeoLocation(geoCoords=(37.893026,-119.581559,+50100),
        children=[
        Anchor(description='Yosemite',parameter=["target=_martinstrips"],url=["http://www.ai.sri.com/cgi-bin/show_img.pl?img=mum/mum4.jpg"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 32',orientation=(1.0,0.0,0.0,-1.57),position=(36.522546,-116.917641,+5000100)),
      GeoLocation(geoCoords=(36.522546,-116.917641,+50100),
        children=[
        Anchor(description='Death Valley',parameter=["target=_martinstrips"],url=["http://www.ai.sri.com/cgi-bin/show_img.pl?img=death/badwater.jpg"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 33',orientation=(1.0,0.0,0.0,-1.57),position=(40.755486,-73.986148,+5000100)),
      GeoLocation(geoCoords=(40.755486,-73.986148,+50100),
        children=[
        Anchor(description='New York NY',parameter=["target=_martinstrips"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 34',orientation=(1.0,0.0,0.0,-1.57),position=(38.892076,-77.031942,+5000100)),
      GeoLocation(geoCoords=(38.892076,-77.031942,+50100),
        children=[
        Anchor(description='Washington DC',parameter=["target=_martinstrips"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 35',orientation=(1.0,0.0,0.0,-1.57),position=(28.564086,-81.364457,+5000100)),
      GeoLocation(geoCoords=(28.564086,-81.364457,+50100),
        children=[
        Anchor(description='Orlando FL',parameter=["target=_martinstrips"],url=["http://www.ai.sri.com/cgi-bin/show_img.pl?img=jpg/disney1.jpg"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 36',orientation=(1.0,0.0,0.0,-1.57),position=(29.955863,-90.072585,+5000100)),
      GeoLocation(geoCoords=(29.955863,-90.072585,+50100),
        children=[
        Anchor(description='New Orleans LA',parameter=["target=_martinstrips"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 37',orientation=(1.0,0.0,0.0,-1.57),position=(40.026881,-105.251025,+5000100)),
      GeoLocation(geoCoords=(40.026881,-105.251025,+50100),
        children=[
        Anchor(description='Boulder CO',parameter=["target=_martinstrips"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 38',orientation=(1.0,0.0,0.0,-1.57),position=(39.118556,-94.627072,+5000100)),
      GeoLocation(geoCoords=(39.118556,-94.627072,+50100),
        children=[
        Anchor(description='Kansas City KS',parameter=["target=_martinstrips"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 39',orientation=(1.0,0.0,0.0,-1.57),position=(36.828402,-108.004633,+5000100)),
      GeoLocation(geoCoords=(36.828402,-108.004633,+50100),
        children=[
        Anchor(description='Aztec NM',parameter=["target=_martinstrips"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 40',orientation=(1.0,0.0,0.0,-1.57),position=(35.678502,-105.954149,+5000100)),
      GeoLocation(geoCoords=(35.678502,-105.954149,+50100),
        children=[
        Anchor(description='Santa Fe NM',parameter=["target=_martinstrips"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 41',orientation=(1.0,0.0,0.0,-1.57),position=(36.158861,-115.147437,+5000100)),
      GeoLocation(geoCoords=(36.158861,-115.147437,+50100),
        children=[
        Anchor(description='Las Vegas NV',parameter=["target=_martinstrips"],url=["http://www.ai.sri.com/cgi-bin/show_img.pl?img=mum/mum15.jpg"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 42',orientation=(1.0,0.0,0.0,-1.57),position=(47.612224,-122.338469,+5000100)),
      GeoLocation(geoCoords=(47.612224,-122.338469,+50100),
        children=[
        Anchor(description='Seattle WA',parameter=["target=_martinstrips"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 43',orientation=(1.0,0.0,0.0,-1.57),position=(41.39,-70.65,+5000100)),
      GeoLocation(geoCoords=(41.39,-70.65,+50100),
        children=[
        Anchor(description="Martha's Vineyard MA",parameter=["target=_martinstrips"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 44',orientation=(1.0,0.0,0.0,-1.57),position=(36.046441,-112.153457,+5000100)),
      GeoLocation(geoCoords=(36.046441,-112.153457,+50100),
        children=[
        Anchor(description='Grand Canyon AZ',parameter=["target=_martinstrips"],url=["http://www.ai.sri.com/cgi-bin/show_img.pl?img=mum/mum8.jpg"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 45',orientation=(1.0,0.0,0.0,-1.57),position=(40.440219,-121.527441,+5000100)),
      GeoLocation(geoCoords=(40.440219,-121.527441,+50100),
        children=[
        Anchor(description='Lassen Park CA',parameter=["target=_martinstrips"],url=["http://www.ai.sri.com/cgi-bin/show_img.pl?img=lassen/Lassen4.jpg"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])]),
      GeoViewpoint(description='Model 46',orientation=(1.0,0.0,0.0,-1.57),position=(51.17,-115.57,+5000100)),
      GeoLocation(geoCoords=(51.17,-115.57,+50100),
        children=[
        Anchor(description='Banff',parameter=["target=_martinstrips"],
          children=[
          Transform(rotation=(1.0,0.0,0.0,3.14159),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,0.0,0.0))),
              geometry=Cone(bottomRadius=50000.0,height=100000.0))])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TripsModel.py")
