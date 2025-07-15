####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python CaliforniaCampuses.py
#
# Python package x3d.py package is available on PyPI for import.
#   This approach simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package in other Python programs:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Immersive',version='4.0',
  head=head(
    children=[
    component(level=1,name='Geospatial'),
    meta(content='CaliforniaCampuses.x3d',name='title'),
    meta(content='Viewpoints and tour of California campuses',name='description'),
    meta(content='Don Brutzman, Dale Tourtelotte, Mike Bailey, Don McGregor',name='creator'),
    meta(content='4 March 2010',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='CaliforniaCampuses.kml',name='reference'),
    meta(content='https://www.web3d.org/x3d-earth',name='reference'),
    meta(content='http://x3d-earth.nps.edu',name='reference'),
    meta(content='http://hamming.uc.nps.edu',name='reference'),
    meta(content='X3D Earth',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Geospatial/CaliforniaCampuses.x3d',name='identifier'),
    meta(content='http://mmog.ern.nps.edu/California/California.x3d',name='reference'),
    meta(content='under development',name='warning'),
    meta(content='mmog.ern.nps.edu restricted to internal access within NPS firewall only',name='warning'),
    meta(content='KmlToX3dViewpoints.xslt',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://savage.nps.edu/Savage/license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='CaliforniaCampuses.x3d'),
    Switch(DEF='SwitchGlobes',whichChoice=0,
      #  Select globe of interest. Warning: may need to keep alternate globes commented out to prevent browser caching. 
      children=[
      Inline(url=["http://x3d-earth.nps.edu/osmdemo.x3d"])]
      #  <Inline load='false' url='"http://mmog.ern.nps.edu/California/California.x3d"'/> 
      #  <Inline load='false' url='"http://x3d-earth.nps.edu/7_levels_plus/tiles/0/globe.x3d"'/> 
      #  <Inline load='false' url='"http://x3d-earth.nps.edu/globe/MBARI1MinuteBathy/world.x3d"'/> 
      #  <Inline load='false' url='"http://x3d-earth.nps.edu/globe/SRTM30Plus/world.x3d"'/> 
      ),
    NavigationInfo(transitionType=["ANIMATE"]),
    Group(DEF='PlacemarkGroup',
      children=[
      GeoViewpoint(DEF='View01',description='Naval Postgraduate School',orientation=(1,0,0,-1.57),position=(36.595599,-121.877148,250000)),
      GeoViewpoint(DEF='View02',description='University of California Davis',orientation=(1,0,0,-1.57),position=(38.53650615157984,-121.7489628616831,250000)),
      GeoViewpoint(DEF='View03',description='University of California Berkeley',orientation=(1,0,0,-1.57),position=(37.86963434512325,-122.2593873127355,250000)),
      GeoViewpoint(DEF='View04',description='University of California San Francisco',orientation=(1,0,0,-1.57),position=(37.76340647188392,-122.4582475377715,250000)),
      GeoViewpoint(DEF='View05',description='University of California Santa Cruz',orientation=(1,0,0,-1.57),position=(36.99628443046043,-122.0534325473795,250000)),
      GeoViewpoint(DEF='View06',description='University of California Merced',orientation=(1,0,0,-1.57),position=(37.365508575977,-120.4252597059142,250000)),
      GeoViewpoint(DEF='View07',description='University of California Santa Barbara',orientation=(1,0,0,-1.57),position=(34.41124450961521,-119.8479940053906,250000)),
      GeoViewpoint(DEF='View08',description='University of California Los Angeles',orientation=(1,0,0,-1.57),position=(34.07224474392262,-118.4408472225642,250000)),
      GeoViewpoint(DEF='View09',description='University of California Irvine',orientation=(1,0,0,-1.57),position=(33.64623283675919,-117.8427064139082,250000)),
      GeoViewpoint(DEF='View10',description='University of California Riverside',orientation=(1,0,0,-1.57),position=(33.97350567066717,-117.3281649569839,250000)),
      GeoViewpoint(DEF='View11',description='University of California San Diego',orientation=(1,0,0,-1.57),position=(32.87612136607509,-117.2367298240259,250000)),
      GeoViewpoint(DEF='View12',description='Humboldt State University',orientation=(1,0,0,-1.57),position=(40.87630235623448,-124.0785789217266,250000)),
      GeoViewpoint(DEF='View13',description='California State University, Chico',orientation=(1,0,0,-1.57),position=(39.73031527724385,-121.8453722745223,250000)),
      GeoViewpoint(DEF='View14',description='California State University Sacramento',orientation=(1,0,0,-1.57),position=(38.5626517618963,-121.4244636520556,250000)),
      GeoViewpoint(DEF='View15',description='Sonoma State University',orientation=(1,0,0,-1.57),position=(38.33922929793606,-122.6744333530031,250000)),
      GeoViewpoint(DEF='View16',description='California Maritime Academy',orientation=(1,0,0,-1.57),position=(38.06907065059484,-122.2309147135222,250000)),
      GeoViewpoint(DEF='View17',description='San Francisco State University',orientation=(1,0,0,-1.57),position=(37.722876,-122.4781512190666,250000)),
      GeoViewpoint(DEF='View18',description='California State University, East Bay',orientation=(1,0,0,-1.57),position=(37.65707914139907,-122.0569190659761,250000)),
      GeoViewpoint(DEF='View19',description='California State University Stanislaus',orientation=(1,0,0,-1.57),position=(37.52552478005697,-120.8563508560606,250000)),
      GeoViewpoint(DEF='View20',description='San Jose State University',orientation=(1,0,0,-1.57),position=(37.33580940527095,-121.8815343755784,250000)),
      GeoViewpoint(DEF='View21',description='California State University, Monterey Bay',orientation=(1,0,0,-1.57),position=(36.6538071781493,-121.7984465276711,250000)),
      GeoViewpoint(DEF='View22',description='Fresno State University',orientation=(1,0,0,-1.57),position=(36.812166,-119.7451552005852,250000)),
      GeoViewpoint(DEF='View23',description='California State University, Bakersfield',orientation=(1,0,0,-1.57),position=(35.350804,-119.1043226128032,250000)),
      GeoViewpoint(DEF='View24',description='California Polytechnic State University',orientation=(1,0,0,-1.57),position=(35.30115692599171,-120.6595761796351,250000)),
      GeoViewpoint(DEF='View25',description='California State University, Channel Islands',orientation=(1,0,0,-1.57),position=(34.1624126428852,-119.0425264841287,250000)),
      GeoViewpoint(DEF='View26',description='California State University, Northridge',orientation=(1,0,0,-1.57),position=(34.23959265263849,-118.5284272400904,250000)),
      GeoViewpoint(DEF='View27',description='California State University, Los Angeles',orientation=(1,0,0,-1.57),position=(34.06645996626264,-118.1682050902557,250000)),
      GeoViewpoint(DEF='View28',description='California State Polytechnic University, Pomona',orientation=(1,0,0,-1.57),position=(34.05727150000314,-117.8215320234812,250000)),
      GeoViewpoint(DEF='View29',description='California State University, San Bernardino',orientation=(1,0,0,-1.57),position=(34.18180116432101,-117.3243676664719,250000)),
      GeoViewpoint(DEF='View30',description='California State University, Fullerton',orientation=(1,0,0,-1.57),position=(33.882522,-117.8868367869023,250000)),
      GeoViewpoint(DEF='View31',description='California State University Dominguez Hills',orientation=(1,0,0,-1.57),position=(33.86463396857103,-118.2553596272055,250000)),
      GeoViewpoint(DEF='View32',description='California State University, Long Beach',orientation=(1,0,0,-1.57),position=(33.78196696470824,-118.112678253688,250000)),
      GeoViewpoint(DEF='View33',description='California State University, San Marcos',orientation=(1,0,0,-1.57),position=(33.12837619265174,-117.1600194071002,250000)),
      GeoViewpoint(DEF='View34',description='San Diego State University',orientation=(1,0,0,-1.57),position=(32.77593126586385,-117.0722876242553,250000)),
      GeoViewpoint(DEF='View35',description='CENIC',orientation=(1,0,0,-1.57),position=(33.879947,-118.027903,250000))]),
    #  ==================== 
    ExternProtoDeclare(appinfo='CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point',name='CrossHair',url=["../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair"],
      field=[
      field(accessType='initializeOnly',appinfo='whether CrossHair prototype is enabled or not',name='enabled',type='SFBool'),
      field(accessType='inputOnly',appinfo='control whether enabled/disabled',name='set_enabled',type='SFBool'),
      field(accessType='inputOutput',appinfo='color of CrossHair marker',name='markerColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='size of CrossHair in meters',name='scale',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='distance in front of HUD viewpoint',name='positionOffsetFromCamera',type='SFVec3f')]),
    ProtoInstance(DEF='CrossHairInstance',name='CrossHair',
      fieldValue=[
      fieldValue(name='enabled',value=True),
      fieldValue(name='markerColor',value=(0.1,0.8,0.1)),
      fieldValue(name='scale',value=(0.5,0.5,0.5)),
      fieldValue(name='positionOffsetFromCamera',value=(0,0,-5))]),
    #  ==================== 
    ExternProtoDeclare(appinfo='Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location',name='HeadsUpDisplay',url=["../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"],
      field=[
      field(accessType='inputOutput',appinfo='X3D content positioned at HUD offset',name='children',type='MFNode'),
      field(accessType='inputOutput',appinfo='offset position for HUD relative to current view location, default 0 0 -5',name='screenOffset',type='SFVec3f'),
      field(accessType='outputOnly',appinfo='HUD position update (in world coordinates) relative to original location',name='position_changed',type='SFVec3f'),
      field(accessType='outputOnly',appinfo='HUD orientation update relative to original location',name='orientation_changed',type='SFRotation')]),
    #  ==================== 
    ExternProtoDeclare(appinfo='Sequentially binds each Viewpoint in a set of Viewpoint USE nodes, creating an automatic tour for a scene',name='ViewpointSequencer',url=["../../Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer","https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer","../../Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer","https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer"],
      field=[
      field(accessType='initializeOnly',appinfo='Viewpoint USE nodes that are sequentially bound',name='viewpoints',type='MFNode'),
      field(accessType='inputOutput',appinfo='number of seconds between viewpoint shifts',name='interval',type='SFTime'),
      field(accessType='inputOutput',appinfo='whether ViewpointSequencer is enabled or not',name='enabled',type='SFBool'),
      field(accessType='inputOnly',appinfo='whether ViewpointSequencer is enabled or not',name='set_enabled',type='SFBool'),
      field(accessType='inputOnly',appinfo='bind previous Viewpoint in list',name='previous',type='SFBool'),
      field(accessType='inputOnly',appinfo='bind next Viewpoint in list',name='next',type='SFBool'),
      field(accessType='inputOutput',appinfo='Select message to toggle ViewpointSequencer',name='toggleMessage',type='MFString'),
      field(accessType='initializeOnly',appinfo='Color for toggleMessage text',name='toggleMessageFontSize',type='SFFloat'),
      field(accessType='inputOutput',appinfo='Color for toggleMessage text',name='toggleMessageColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='enable console output',name='traceEnabled',type='SFBool')]),
    ProtoInstance(DEF='ViewpointTour',name='ViewpointSequencer',
      fieldValue=[
      fieldValue(name='interval',value=30),
      #  initially enabled is off, scene provides selectable text to activate 
      fieldValue(name='enabled',value=True),
      fieldValue(name='toggleMessage',value=["ViewpointSequencer tour"]),
      fieldValue(name='viewpoints',
        children=[
        GeoViewpoint(USE='View01'),
        GeoViewpoint(USE='View02'),
        GeoViewpoint(USE='View03'),
        GeoViewpoint(USE='View04'),
        GeoViewpoint(USE='View05'),
        GeoViewpoint(USE='View06'),
        GeoViewpoint(USE='View07'),
        GeoViewpoint(USE='View08'),
        GeoViewpoint(USE='View09'),
        GeoViewpoint(USE='View10'),
        GeoViewpoint(USE='View11'),
        GeoViewpoint(USE='View12'),
        GeoViewpoint(USE='View13'),
        GeoViewpoint(USE='View14'),
        GeoViewpoint(USE='View15'),
        GeoViewpoint(USE='View16'),
        GeoViewpoint(USE='View17'),
        GeoViewpoint(USE='View18'),
        GeoViewpoint(USE='View19'),
        GeoViewpoint(USE='View20'),
        GeoViewpoint(USE='View21'),
        GeoViewpoint(USE='View22'),
        GeoViewpoint(USE='View23'),
        GeoViewpoint(USE='View24'),
        GeoViewpoint(USE='View25'),
        GeoViewpoint(USE='View26'),
        GeoViewpoint(USE='View27'),
        GeoViewpoint(USE='View28'),
        GeoViewpoint(USE='View29'),
        GeoViewpoint(USE='View30'),
        GeoViewpoint(USE='View31'),
        GeoViewpoint(USE='View32'),
        GeoViewpoint(USE='View33'),
        GeoViewpoint(USE='View34'),
        GeoViewpoint(USE='View35'),
        Viewpoint(DEF='View4',description='View four (-X axis)',orientation=(0,1,0,-1.57),position=(-10,0,0))])]),
    #  ==================== 
    GeoLocation(geoCoords=(36.595599,-121.877148,624990),
      children=[
      Billboard(axisOfRotation=(0,0,0),
        children=[
        Shape(
          geometry=Text(string=["ViewpointSequencer tour"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
          appearance=Appearance(
            material=Material(ambientIntensity=0.25,diffuseColor=(0.795918,0.505869,0.093315),shininess=0.39,specularColor=(0.923469,0.428866,0.006369))))]),
      TouchSensor(DEF='TourTouch',description='Touch text to turn tour on/off'),
      BooleanToggle(DEF='TourToggle'),
      ROUTE(fromField='isActive',fromNode='TourTouch',toField='set_boolean',toNode='TourToggle'),
      ROUTE(fromField='toggle',fromNode='TourToggle',toField='set_enabled',toNode='ViewpointTour')]),
    #  ==================== 
    ExternProtoDeclare(appinfo='ViewPositionOrientation provides provides console output of local position and orientation as user navigates',name='ViewPositionOrientation',url=["../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"],
      field=[
      field(accessType='inputOutput',appinfo='Whether or not ViewPositionOrientation sends output to console',name='enabled',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Output internal trace messages for debugging this node, intended for developer use only',name='traceEnabled',type='SFBool'),
      field(accessType='inputOnly',appinfo='Ability to turn output tracing on/off at runtime',name='set_traceEnabled',type='SFBool'),
      field(accessType='outputOnly',appinfo='Output local position',name='position_changed',type='SFVec3f'),
      field(accessType='outputOnly',appinfo='Output local orientation',name='orientation_changed',type='SFRotation'),
      field(accessType='outputOnly',appinfo='MFString value of new Viewpoint',name='outputViewpointString',type='MFString')]),
    ProtoInstance(DEF='ExampleViewPositionOrientation',name='ViewPositionOrientation',
      fieldValue=[
      fieldValue(name='enabled',value=False)])]
    #  ==================== 
    )
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for CaliforniaCampuses.py:')
if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel)) # display meta info, hint, warning, error, TODO values in this model
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful", flush=True)
except Exception as err: # usually BaseException
    # https://stackoverflow.com/questions/18176602/how-to-get-the-name-of-an-exception-that-was-caught-in-python
    print("*** Python-to-VRML export of VRML output failed:", type(err).__name__, err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (under development)")
except Exception as err: # usually SyntaxError
    print("*** Python-to-JSON export of JSON output failed:", type(err).__name__, err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python CaliforniaCampuses.py load and self-test diagnostics complete.")
