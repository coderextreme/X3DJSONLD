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
    meta(content='CaliforniaCampusesTour3Altitudes.x3d',name='title'),
    meta(content='Viewpoints and tour of California campuses',name='description'),
    meta(content='Don Brutzman, Dale Tourtelotte, Mike Bailey, Don McGregor',name='creator'),
    meta(content='4 March 2010',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='CaliforniaCampuses.kml',name='reference'),
    meta(content='https://www.web3d.org/x3d-earth',name='reference'),
    meta(content='http://x3d-earth.nps.edu',name='reference'),
    meta(content='http://hamming.uc.nps.edu',name='reference'),
    meta(content='X3D Earth',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Geospatial/CaliforniaCampusesTour3Altitudes.x3d',name='identifier'),
    meta(content='http://mmog.ern.nps.edu/California/California.x3d',name='reference'),
    meta(content='under development',name='warning'),
    meta(content='mmog.ern.nps.edu restricted to internal access within NPS firewall only',name='warning'),
    meta(content='KmlToX3dViewpoints.xslt',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://savage.nps.edu/Savage/license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='CaliforniaCampusesTour3Altitudes.x3d'),
    Group(DEF='LightGroup'),
    Switch(DEF='SwitchGlobes',whichChoice=0,
      #  Select globe of interest. Warning: may need to keep alternate globes commented out to prevent browser caching. 
      #  <Inline load='true' url='"CaliforniaDemo.x3d"'/> 
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
      GeoViewpoint(DEF='View01high',description='Naval Postgraduate School 200km',orientation=(1,0,0,-1.57),position=(36.595599,-121.877148,200000)),
      GeoViewpoint(DEF='View01medium',description='Naval Postgraduate School 100km',orientation=(1,0,0,-1.57),position=(36.595599,-121.877148,100000)),
      GeoViewpoint(DEF='View01low',description='Naval Postgraduate School 50km',orientation=(1,0,0,-1.57),position=(36.595599,-121.877148,50000)),
      GeoViewpoint(DEF='View02high',description='University of California Davis 200km',orientation=(1,0,0,-1.57),position=(38.53650615157984,-121.7489628616831,200000)),
      GeoViewpoint(DEF='View02medium',description='University of California Davis 100km',orientation=(1,0,0,-1.57),position=(38.53650615157984,-121.7489628616831,100000)),
      GeoViewpoint(DEF='View02low',description='University of California Davis 50km',orientation=(1,0,0,-1.57),position=(38.53650615157984,-121.7489628616831,50000)),
      GeoViewpoint(DEF='View03high',description='University of California Berkeley 200km',orientation=(1,0,0,-1.57),position=(37.86963434512325,-122.2593873127355,200000)),
      GeoViewpoint(DEF='View03medium',description='University of California Berkeley 100km',orientation=(1,0,0,-1.57),position=(37.86963434512325,-122.2593873127355,100000)),
      GeoViewpoint(DEF='View03low',description='University of California Berkeley 50km',orientation=(1,0,0,-1.57),position=(37.86963434512325,-122.2593873127355,50000)),
      GeoViewpoint(DEF='View04high',description='University of California San Francisco 200km',orientation=(1,0,0,-1.57),position=(37.76340647188392,-122.4582475377715,200000)),
      GeoViewpoint(DEF='View04medium',description='University of California San Francisco 100km',orientation=(1,0,0,-1.57),position=(37.76340647188392,-122.4582475377715,100000)),
      GeoViewpoint(DEF='View04low',description='University of California San Francisco 50km',orientation=(1,0,0,-1.57),position=(37.76340647188392,-122.4582475377715,50000)),
      GeoViewpoint(DEF='View05high',description='University of California Santa Cruz 200km',orientation=(1,0,0,-1.57),position=(36.99628443046043,-122.0534325473795,200000)),
      GeoViewpoint(DEF='View05medium',description='University of California Santa Cruz 100km',orientation=(1,0,0,-1.57),position=(36.99628443046043,-122.0534325473795,100000)),
      GeoViewpoint(DEF='View05low',description='University of California Santa Cruz 50km',orientation=(1,0,0,-1.57),position=(36.99628443046043,-122.0534325473795,50000)),
      GeoViewpoint(DEF='View06high',description='University of California Merced 200km',orientation=(1,0,0,-1.57),position=(37.365508575977,-120.4252597059142,200000)),
      GeoViewpoint(DEF='View06medium',description='University of California Merced 100km',orientation=(1,0,0,-1.57),position=(37.365508575977,-120.4252597059142,100000)),
      GeoViewpoint(DEF='View06low',description='University of California Merced 50km',orientation=(1,0,0,-1.57),position=(37.365508575977,-120.4252597059142,50000)),
      GeoViewpoint(DEF='View07high',description='University of California Santa Barbara 200km',orientation=(1,0,0,-1.57),position=(34.41124450961521,-119.8479940053906,200000)),
      GeoViewpoint(DEF='View07medium',description='University of California Santa Barbara 100km',orientation=(1,0,0,-1.57),position=(34.41124450961521,-119.8479940053906,100000)),
      GeoViewpoint(DEF='View07low',description='University of California Santa Barbara 50km',orientation=(1,0,0,-1.57),position=(34.41124450961521,-119.8479940053906,50000)),
      GeoViewpoint(DEF='View08high',description='University of California Los Angeles 200km',orientation=(1,0,0,-1.57),position=(34.07224474392262,-118.4408472225642,200000)),
      GeoViewpoint(DEF='View08medium',description='University of California Los Angeles 100km',orientation=(1,0,0,-1.57),position=(34.07224474392262,-118.4408472225642,100000)),
      GeoViewpoint(DEF='View08low',description='University of California Los Angeles 50km',orientation=(1,0,0,-1.57),position=(34.07224474392262,-118.4408472225642,50000)),
      GeoViewpoint(DEF='View09high',description='University of California Irvine 200km',orientation=(1,0,0,-1.57),position=(33.64623283675919,-117.8427064139082,200000)),
      GeoViewpoint(DEF='View09medium',description='University of California Irvine 100km',orientation=(1,0,0,-1.57),position=(33.64623283675919,-117.8427064139082,100000)),
      GeoViewpoint(DEF='View09low',description='University of California Irvine 50km',orientation=(1,0,0,-1.57),position=(33.64623283675919,-117.8427064139082,50000)),
      GeoViewpoint(DEF='View10high',description='University of California Riverside 200km',orientation=(1,0,0,-1.57),position=(33.97350567066717,-117.3281649569839,200000)),
      GeoViewpoint(DEF='View10medium',description='University of California Riverside 100km',orientation=(1,0,0,-1.57),position=(33.97350567066717,-117.3281649569839,100000)),
      GeoViewpoint(DEF='View10low',description='University of California Riverside 50km',orientation=(1,0,0,-1.57),position=(33.97350567066717,-117.3281649569839,50000)),
      GeoViewpoint(DEF='View11high',description='University of California San Diego 200km',orientation=(1,0,0,-1.57),position=(32.87612136607509,-117.2367298240259,200000)),
      GeoViewpoint(DEF='View11medium',description='University of California San Diego 100km',orientation=(1,0,0,-1.57),position=(32.87612136607509,-117.2367298240259,100000)),
      GeoViewpoint(DEF='View11low',description='University of California San Diego 50km',orientation=(1,0,0,-1.57),position=(32.87612136607509,-117.2367298240259,50000)),
      GeoViewpoint(DEF='View12high',description='Humboldt State University 200km',orientation=(1,0,0,-1.57),position=(40.87630235623448,-124.0785789217266,200000)),
      GeoViewpoint(DEF='View12medium',description='Humboldt State University 100km',orientation=(1,0,0,-1.57),position=(40.87630235623448,-124.0785789217266,100000)),
      GeoViewpoint(DEF='View12low',description='Humboldt State University 50km',orientation=(1,0,0,-1.57),position=(40.87630235623448,-124.0785789217266,50000)),
      GeoViewpoint(DEF='View13high',description='California State University, Chico 200km',orientation=(1,0,0,-1.57),position=(39.73031527724385,-121.8453722745223,200000)),
      GeoViewpoint(DEF='View13medium',description='California State University, Chico 100km',orientation=(1,0,0,-1.57),position=(39.73031527724385,-121.8453722745223,100000)),
      GeoViewpoint(DEF='View13low',description='California State University, Chico 50km',orientation=(1,0,0,-1.57),position=(39.73031527724385,-121.8453722745223,50000)),
      GeoViewpoint(DEF='View14high',description='California State University Sacramento 200km',orientation=(1,0,0,-1.57),position=(38.5626517618963,-121.4244636520556,200000)),
      GeoViewpoint(DEF='View14medium',description='California State University Sacramento 100km',orientation=(1,0,0,-1.57),position=(38.5626517618963,-121.4244636520556,100000)),
      GeoViewpoint(DEF='View14low',description='California State University Sacramento 50km',orientation=(1,0,0,-1.57),position=(38.5626517618963,-121.4244636520556,50000)),
      GeoViewpoint(DEF='View15high',description='Sonoma State University 200km',orientation=(1,0,0,-1.57),position=(38.33922929793606,-122.6744333530031,200000)),
      GeoViewpoint(DEF='View15medium',description='Sonoma State University 100km',orientation=(1,0,0,-1.57),position=(38.33922929793606,-122.6744333530031,100000)),
      GeoViewpoint(DEF='View15low',description='Sonoma State University 50km',orientation=(1,0,0,-1.57),position=(38.33922929793606,-122.6744333530031,50000)),
      GeoViewpoint(DEF='View16high',description='California Maritime Academy 200km',orientation=(1,0,0,-1.57),position=(38.06907065059484,-122.2309147135222,200000)),
      GeoViewpoint(DEF='View16medium',description='California Maritime Academy 100km',orientation=(1,0,0,-1.57),position=(38.06907065059484,-122.2309147135222,100000)),
      GeoViewpoint(DEF='View16low',description='California Maritime Academy 50km',orientation=(1,0,0,-1.57),position=(38.06907065059484,-122.2309147135222,50000)),
      GeoViewpoint(DEF='View17high',description='San Francisco State University 200km',orientation=(1,0,0,-1.57),position=(37.722876,-122.4781512190666,200000)),
      GeoViewpoint(DEF='View17medium',description='San Francisco State University 100km',orientation=(1,0,0,-1.57),position=(37.722876,-122.4781512190666,100000)),
      GeoViewpoint(DEF='View17low',description='San Francisco State University 50km',orientation=(1,0,0,-1.57),position=(37.722876,-122.4781512190666,50000)),
      GeoViewpoint(DEF='View18high',description='California State University, East Bay 200km',orientation=(1,0,0,-1.57),position=(37.65707914139907,-122.0569190659761,200000)),
      GeoViewpoint(DEF='View18medium',description='California State University, East Bay 100km',orientation=(1,0,0,-1.57),position=(37.65707914139907,-122.0569190659761,100000)),
      GeoViewpoint(DEF='View18low',description='California State University, East Bay 50km',orientation=(1,0,0,-1.57),position=(37.65707914139907,-122.0569190659761,50000)),
      GeoViewpoint(DEF='View19high',description='California State University Stanislaus 200km',orientation=(1,0,0,-1.57),position=(37.52552478005697,-120.8563508560606,200000)),
      GeoViewpoint(DEF='View19medium',description='California State University Stanislaus 100km',orientation=(1,0,0,-1.57),position=(37.52552478005697,-120.8563508560606,100000)),
      GeoViewpoint(DEF='View19low',description='California State University Stanislaus 50km',orientation=(1,0,0,-1.57),position=(37.52552478005697,-120.8563508560606,50000)),
      GeoViewpoint(DEF='View20high',description='San Jose State University 200km',orientation=(1,0,0,-1.57),position=(37.33580940527095,-121.8815343755784,200000)),
      GeoViewpoint(DEF='View20medium',description='San Jose State University 100km',orientation=(1,0,0,-1.57),position=(37.33580940527095,-121.8815343755784,100000)),
      GeoViewpoint(DEF='View20low',description='San Jose State University 50km',orientation=(1,0,0,-1.57),position=(37.33580940527095,-121.8815343755784,50000)),
      GeoViewpoint(DEF='View21high',description='California State University, Monterey Bay 200km',orientation=(1,0,0,-1.57),position=(36.6538071781493,-121.7984465276711,200000)),
      GeoViewpoint(DEF='View21medium',description='California State University, Monterey Bay 100km',orientation=(1,0,0,-1.57),position=(36.6538071781493,-121.7984465276711,100000)),
      GeoViewpoint(DEF='View21low',description='California State University, Monterey Bay 50km',orientation=(1,0,0,-1.57),position=(36.6538071781493,-121.7984465276711,50000)),
      GeoViewpoint(DEF='View22high',description='Fresno State University 200km',orientation=(1,0,0,-1.57),position=(36.812166,-119.7451552005852,200000)),
      GeoViewpoint(DEF='View22medium',description='Fresno State University 100km',orientation=(1,0,0,-1.57),position=(36.812166,-119.7451552005852,100000)),
      GeoViewpoint(DEF='View22low',description='Fresno State University 50km',orientation=(1,0,0,-1.57),position=(36.812166,-119.7451552005852,50000)),
      GeoViewpoint(DEF='View23high',description='California State University, Bakersfield 200km',orientation=(1,0,0,-1.57),position=(35.350804,-119.1043226128032,200000)),
      GeoViewpoint(DEF='View23medium',description='California State University, Bakersfield 100km',orientation=(1,0,0,-1.57),position=(35.350804,-119.1043226128032,100000)),
      GeoViewpoint(DEF='View23low',description='California State University, Bakersfield 50km',orientation=(1,0,0,-1.57),position=(35.350804,-119.1043226128032,50000)),
      GeoViewpoint(DEF='View24high',description='California Polytechnic State University 200km',orientation=(1,0,0,-1.57),position=(35.30115692599171,-120.6595761796351,200000)),
      GeoViewpoint(DEF='View24medium',description='California Polytechnic State University 100km',orientation=(1,0,0,-1.57),position=(35.30115692599171,-120.6595761796351,100000)),
      GeoViewpoint(DEF='View24low',description='California Polytechnic State University 50km',orientation=(1,0,0,-1.57),position=(35.30115692599171,-120.6595761796351,50000)),
      GeoViewpoint(DEF='View25high',description='California State University, Channel Islands 200km',orientation=(1,0,0,-1.57),position=(34.1624126428852,-119.0425264841287,200000)),
      GeoViewpoint(DEF='View25medium',description='California State University, Channel Islands 100km',orientation=(1,0,0,-1.57),position=(34.1624126428852,-119.0425264841287,100000)),
      GeoViewpoint(DEF='View25low',description='California State University, Channel Islands 50km',orientation=(1,0,0,-1.57),position=(34.1624126428852,-119.0425264841287,50000)),
      GeoViewpoint(DEF='View26high',description='California State University, Northridge 200km',orientation=(1,0,0,-1.57),position=(34.23959265263849,-118.5284272400904,200000)),
      GeoViewpoint(DEF='View26medium',description='California State University, Northridge 100km',orientation=(1,0,0,-1.57),position=(34.23959265263849,-118.5284272400904,100000)),
      GeoViewpoint(DEF='View26low',description='California State University, Northridge 50km',orientation=(1,0,0,-1.57),position=(34.23959265263849,-118.5284272400904,50000)),
      GeoViewpoint(DEF='View27high',description='California State University, Los Angeles 200km',orientation=(1,0,0,-1.57),position=(34.06645996626264,-118.1682050902557,200000)),
      GeoViewpoint(DEF='View27medium',description='California State University, Los Angeles 100km',orientation=(1,0,0,-1.57),position=(34.06645996626264,-118.1682050902557,100000)),
      GeoViewpoint(DEF='View27low',description='California State University, Los Angeles 50km',orientation=(1,0,0,-1.57),position=(34.06645996626264,-118.1682050902557,50000)),
      GeoViewpoint(DEF='View28high',description='California State Polytechnic University, Pomona 200km',orientation=(1,0,0,-1.57),position=(34.05727150000314,-117.8215320234812,200000)),
      GeoViewpoint(DEF='View28medium',description='California State Polytechnic University, Pomona 100km',orientation=(1,0,0,-1.57),position=(34.05727150000314,-117.8215320234812,100000)),
      GeoViewpoint(DEF='View28low',description='California State Polytechnic University, Pomona 50km',orientation=(1,0,0,-1.57),position=(34.05727150000314,-117.8215320234812,50000)),
      GeoViewpoint(DEF='View29high',description='California State University, San Bernardino 200km',orientation=(1,0,0,-1.57),position=(34.18180116432101,-117.3243676664719,200000)),
      GeoViewpoint(DEF='View29medium',description='California State University, San Bernardino 100km',orientation=(1,0,0,-1.57),position=(34.18180116432101,-117.3243676664719,100000)),
      GeoViewpoint(DEF='View29low',description='California State University, San Bernardino 50km',orientation=(1,0,0,-1.57),position=(34.18180116432101,-117.3243676664719,50000)),
      GeoViewpoint(DEF='View30high',description='California State University, Fullerton 200km',orientation=(1,0,0,-1.57),position=(33.882522,-117.8868367869023,200000)),
      GeoViewpoint(DEF='View30medium',description='California State University, Fullerton 100km',orientation=(1,0,0,-1.57),position=(33.882522,-117.8868367869023,100000)),
      GeoViewpoint(DEF='View30low',description='California State University, Fullerton 50km',orientation=(1,0,0,-1.57),position=(33.882522,-117.8868367869023,50000)),
      GeoViewpoint(DEF='View31high',description='California State University Dominguez Hills 200km',orientation=(1,0,0,-1.57),position=(33.86463396857103,-118.2553596272055,200000)),
      GeoViewpoint(DEF='View31medium',description='California State University Dominguez Hills 100km',orientation=(1,0,0,-1.57),position=(33.86463396857103,-118.2553596272055,100000)),
      GeoViewpoint(DEF='View31low',description='California State University Dominguez Hills 50km',orientation=(1,0,0,-1.57),position=(33.86463396857103,-118.2553596272055,50000)),
      GeoViewpoint(DEF='View32high',description='California State University, Long Beach 200km',orientation=(1,0,0,-1.57),position=(33.78196696470824,-118.112678253688,200000)),
      GeoViewpoint(DEF='View32medium',description='California State University, Long Beach 100km',orientation=(1,0,0,-1.57),position=(33.78196696470824,-118.112678253688,100000)),
      GeoViewpoint(DEF='View32low',description='California State University, Long Beach 50km',orientation=(1,0,0,-1.57),position=(33.78196696470824,-118.112678253688,50000)),
      GeoViewpoint(DEF='View33high',description='California State University, San Marcos 200km',orientation=(1,0,0,-1.57),position=(33.12837619265174,-117.1600194071002,200000)),
      GeoViewpoint(DEF='View33medium',description='California State University, San Marcos 100km',orientation=(1,0,0,-1.57),position=(33.12837619265174,-117.1600194071002,100000)),
      GeoViewpoint(DEF='View33low',description='California State University, San Marcos 50km',orientation=(1,0,0,-1.57),position=(33.12837619265174,-117.1600194071002,50000)),
      GeoViewpoint(DEF='View34high',description='San Diego State University 200km',orientation=(1,0,0,-1.57),position=(32.77593126586385,-117.0722876242553,200000)),
      GeoViewpoint(DEF='View34medium',description='San Diego State University 100km',orientation=(1,0,0,-1.57),position=(32.77593126586385,-117.0722876242553,100000)),
      GeoViewpoint(DEF='View34low',description='San Diego State University 50km',orientation=(1,0,0,-1.57),position=(32.77593126586385,-117.0722876242553,50000)),
      GeoViewpoint(DEF='View35high',description='CENIC 200km',orientation=(1,0,0,-1.57),position=(33.879947,-118.027903,200000)),
      GeoViewpoint(DEF='View35medium',description='CENIC 100km',orientation=(1,0,0,-1.57),position=(33.879947,-118.027903,100000)),
      GeoViewpoint(DEF='View35low',description='CENIC 50km',orientation=(1,0,0,-1.57),position=(33.879947,-118.027903,50000))]),
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
    ExternProtoDeclare(appinfo='Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location',name='HeadsUpDisplay',url=["../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"],
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
      fieldValue(name='interval',value=10),
      #  TODO initially enabled needs to be off, and scene provides selectable text or Viewpoint to activate 
      fieldValue(name='enabled',value=True),
      fieldValue(name='toggleMessage',value=["ViewpointSequencer tour"]),
      fieldValue(name='viewpoints',
        children=[
        GeoViewpoint(USE='View01high'),
        GeoViewpoint(USE='View01medium'),
        GeoViewpoint(USE='View01low'),
        GeoViewpoint(USE='View02high'),
        GeoViewpoint(USE='View02medium'),
        GeoViewpoint(USE='View02low'),
        GeoViewpoint(USE='View03high'),
        GeoViewpoint(USE='View03medium'),
        GeoViewpoint(USE='View03low'),
        GeoViewpoint(USE='View04high'),
        GeoViewpoint(USE='View04medium'),
        GeoViewpoint(USE='View04low'),
        GeoViewpoint(USE='View05high'),
        GeoViewpoint(USE='View05medium'),
        GeoViewpoint(USE='View05low'),
        GeoViewpoint(USE='View06high'),
        GeoViewpoint(USE='View06medium'),
        GeoViewpoint(USE='View06low'),
        GeoViewpoint(USE='View07high'),
        GeoViewpoint(USE='View07medium'),
        GeoViewpoint(USE='View07low'),
        GeoViewpoint(USE='View08high'),
        GeoViewpoint(USE='View08medium'),
        GeoViewpoint(USE='View08low'),
        GeoViewpoint(USE='View09high'),
        GeoViewpoint(USE='View09medium'),
        GeoViewpoint(USE='View09low'),
        GeoViewpoint(USE='View10high'),
        GeoViewpoint(USE='View10medium'),
        GeoViewpoint(USE='View10low'),
        GeoViewpoint(USE='View11high'),
        GeoViewpoint(USE='View11medium'),
        GeoViewpoint(USE='View11low'),
        GeoViewpoint(USE='View12high'),
        GeoViewpoint(USE='View12medium'),
        GeoViewpoint(USE='View12low'),
        GeoViewpoint(USE='View13high'),
        GeoViewpoint(USE='View13medium'),
        GeoViewpoint(USE='View13low'),
        GeoViewpoint(USE='View14high'),
        GeoViewpoint(USE='View14medium'),
        GeoViewpoint(USE='View14low'),
        GeoViewpoint(USE='View15high'),
        GeoViewpoint(USE='View15medium'),
        GeoViewpoint(USE='View15low'),
        GeoViewpoint(USE='View16high'),
        GeoViewpoint(USE='View16medium'),
        GeoViewpoint(USE='View16low'),
        GeoViewpoint(USE='View17high'),
        GeoViewpoint(USE='View17medium'),
        GeoViewpoint(USE='View17low'),
        GeoViewpoint(USE='View18high'),
        GeoViewpoint(USE='View18medium'),
        GeoViewpoint(USE='View18low'),
        GeoViewpoint(USE='View19high'),
        GeoViewpoint(USE='View19medium'),
        GeoViewpoint(USE='View19low'),
        GeoViewpoint(USE='View20high'),
        GeoViewpoint(USE='View20medium'),
        GeoViewpoint(USE='View20low'),
        GeoViewpoint(USE='View21high'),
        GeoViewpoint(USE='View21medium'),
        GeoViewpoint(USE='View21low'),
        GeoViewpoint(USE='View22high'),
        GeoViewpoint(USE='View22medium'),
        GeoViewpoint(USE='View22low'),
        GeoViewpoint(USE='View23high'),
        GeoViewpoint(USE='View23medium'),
        GeoViewpoint(USE='View23low'),
        GeoViewpoint(USE='View24high'),
        GeoViewpoint(USE='View24medium'),
        GeoViewpoint(USE='View24low'),
        GeoViewpoint(USE='View25high'),
        GeoViewpoint(USE='View25medium'),
        GeoViewpoint(USE='View25low'),
        GeoViewpoint(USE='View26high'),
        GeoViewpoint(USE='View26medium'),
        GeoViewpoint(USE='View26low'),
        GeoViewpoint(USE='View27high'),
        GeoViewpoint(USE='View27medium'),
        GeoViewpoint(USE='View27low'),
        GeoViewpoint(USE='View28high'),
        GeoViewpoint(USE='View28medium'),
        GeoViewpoint(USE='View28low'),
        GeoViewpoint(USE='View29high'),
        GeoViewpoint(USE='View29medium'),
        GeoViewpoint(USE='View29low'),
        GeoViewpoint(USE='View30high'),
        GeoViewpoint(USE='View30medium'),
        GeoViewpoint(USE='View30low'),
        GeoViewpoint(USE='View31high'),
        GeoViewpoint(USE='View31medium'),
        GeoViewpoint(USE='View31low'),
        GeoViewpoint(USE='View32high'),
        GeoViewpoint(USE='View32medium'),
        GeoViewpoint(USE='View32low'),
        GeoViewpoint(USE='View33high'),
        GeoViewpoint(USE='View33medium'),
        GeoViewpoint(USE='View33low'),
        GeoViewpoint(USE='View34high'),
        GeoViewpoint(USE='View34medium'),
        GeoViewpoint(USE='View34low'),
        GeoViewpoint(USE='View35high'),
        GeoViewpoint(USE='View35medium'),
        GeoViewpoint(USE='View35low'),
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

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CaliforniaCampusesTour3Altitudes.py")
