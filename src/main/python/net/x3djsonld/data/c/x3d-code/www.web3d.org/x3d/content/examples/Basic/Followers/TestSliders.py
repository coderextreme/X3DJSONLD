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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    meta(content='TestSliders.x3d',name='title'),
    meta(content='X3D Follower example',name='description'),
    meta(content='Herbert Stocker',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='18 April 2006',name='created'),
    meta(content='2 December 2011',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='originals/test_Sliders.wrl',name='reference'),
    meta(content='Stocker_06_Followers.pdf',name='reference'),
    meta(content='http://www.hersto.com/Publications/Followers',name='reference'),
    meta(content='X3D version 3.2 or greater',name='requires'),
    meta(content='X3D Follower Chaser Damper',name='subject'),
    meta(content='under development',name='warning'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Followers/TestSliders.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TestSliders.x3d'),
    ExternProtoDeclare(name='Slider',url=["Slider.x3d#Slider","https://www.web3d.org/x3d/content/examples/Basic/Followers/Slider.x3d#Slider","Slider.wrl#Slider","https://www.web3d.org/x3d/content/examples/Basic/Followers/Slider.wrl#Slider"],
      field=[
      field(accessType='initializeOnly',name='initial_position',type='SFFloat'),
      field(accessType='inputOutput',name='radiusKnob',type='SFFloat'),
      field(accessType='inputOutput',name='radiusStick',type='SFFloat'),
      field(accessType='inputOutput',name='min',type='SFFloat'),
      field(accessType='outputOnly',name='position_changed',type='SFFloat'),
      field(accessType='inputOutput',name='appearance',type='SFNode'),
      field(accessType='inputOutput',name='smoothMovements',type='SFBool'),
      field(accessType='inputOnly',name='set_position',type='SFFloat'),
      field(accessType='inputOutput',name='pageSize',type='SFFloat'),
      field(accessType='inputOutput',name='max',type='SFFloat'),
      field(accessType='inputOutput',name='height',type='SFFloat')]),
    NavigationInfo(type=["EXAMINE"]),
    Viewpoint(description='view 1',orientation=(-0.527,0.846,0.075,0.462),position=(2.741,3.259,6.6)),
    Viewpoint(description='view 2',orientation=(0.973,0.232,0.024,0.466),position=(0.865,-1.591,6.723)),
    Viewpoint(description='view 3',orientation=(0.997,0.06,0.05,1.705),position=(0.934,-5.744,-0.794)),
    Viewpoint(description='view 4',orientation=(0.888,0.23,0.399,3.139),position=(5.165,3.009,-4.663)),
    Viewpoint(description='view 5',orientation=(0.116,0.234,-0.965,1.866),position=(0.424,-2.489,8.627)),
    Viewpoint(description='view 6',orientation=(-0.3,0.639,-0.708,1.922),position=(6.309,-1.261,2.853)),
    Transform(
      children=[
      Transform(rotation=(0.983,0.152,0.098,0.286),
        children=[
        Transform(rotation=(0.705,0.654,-0.274,-1.09),
          children=[
          Transform(rotation=(0.0,0.0,-1.0,1.5708),translation=(2.5,0.0,0.0),
            children=[
            ProtoInstance(DEF='SldX',name='Slider',
              fieldValue=[
              fieldValue(name='initial_position',value=2.5),
              fieldValue(name='radiusKnob',value=0.225),
              fieldValue(name='min',value=1.0),
              fieldValue(name='radiusStick',value=0.15),
              fieldValue(name='appearance',
                children=[
                Appearance(DEF='App',
                  material=Material(ambientIntensity=0.055,diffuseColor=(0.75,0.0,0.55),emissiveColor=(0.1,0.0,0.07),shininess=0.157,specularColor=(0.67,0.67,0.67)))]),
              fieldValue(name='pageSize',value=1.0),
              fieldValue(name='max',value=5.0)]),
            Transform(translation=(0.0,-1.25,0.0),
              children=[
              Shape(
                appearance=Appearance(USE='App'),
                geometry=Cylinder(height=2.5,radius=0.02))])]),
          Transform(translation=(0.0,2.5,0.0),
            children=[
            ProtoInstance(DEF='SldY',name='Slider',
              fieldValue=[
              fieldValue(name='initial_position',value=2.5),
              fieldValue(name='radiusKnob',value=0.225),
              fieldValue(name='min',value=1.0),
              fieldValue(name='radiusStick',value=0.15),
              fieldValue(name='appearance',
                children=[
                Appearance(USE='App')]),
              fieldValue(name='pageSize',value=1.0),
              fieldValue(name='max',value=5.0)]),
            Transform(translation=(0.0,-1.25,0.0),
              children=[
              Shape(
                appearance=Appearance(USE='App'),
                geometry=Cylinder(height=2.5,radius=0.02))])]),
          Transform(rotation=(1.0,0.0,0.0,1.5708),translation=(0.0,0.0,2.5),
            children=[
            ProtoInstance(DEF='SldZ',name='Slider',
              fieldValue=[
              fieldValue(name='initial_position',value=2.5),
              fieldValue(name='radiusKnob',value=0.225),
              fieldValue(name='min',value=1.0),
              fieldValue(name='radiusStick',value=0.15),
              fieldValue(name='appearance',
                children=[
                Appearance(USE='App')]),
              fieldValue(name='pageSize',value=1.0),
              fieldValue(name='max',value=5.0)]),
            Transform(translation=(0.0,-1.25,0.0),
              children=[
              Shape(
                appearance=Appearance(USE='App'),
                geometry=Cylinder(height=2.5,radius=0.02))])])])])]),
    Transform(rotation=(0.983,0.152,0.098,0.286),
      children=[
      Transform(rotation=(0.705,0.654,-0.274,-1.09),
        children=[
        Transform(DEF='Trans',
          children=[
          TouchSensor(DEF='TchBox',description='touch to activate'),
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=0.0933,diffuseColor=(0.37,0.0,0.75),emissiveColor=(0.05,0.0,0.1),shininess=0.41,specularColor=(0.91,0.91,0.91))),
            geometry=Box(size=(0.3,0.3,0.3)))])])]),
    Script(DEF='Worker',
      field=[
      field(accessType='inputOnly',name='set_Z',type='SFFloat'),
      field(accessType='inputOnly',name='set_Y',type='SFFloat'),
      field(accessType='inputOnly',name='set_X',type='SFFloat'),
      field(accessType='initializeOnly',name='Pos',type='SFVec3f',value=(1.0,1.0,1.0)),
      field(accessType='outputOnly',name='Pos_changed',type='SFVec3f')]),
    ROUTE(fromField='position_changed',fromNode='SldX',toField='set_X',toNode='Worker'),
    ROUTE(fromField='position_changed',fromNode='SldY',toField='set_Y',toNode='Worker'),
    ROUTE(fromField='position_changed',fromNode='SldZ',toField='set_Z',toNode='Worker'),
    ROUTE(fromField='Pos_changed',fromNode='Worker',toField='scale',toNode='Trans'),
    Script(DEF='SmoothWorker',
      field=[
      field(accessType='outputOnly',name='SmoothMovements',type='SFBool'),
      field(accessType='inputOnly',name='Box_touched',type='SFTime')]),
    ROUTE(fromField='touchTime',fromNode='TchBox',toField='Box_touched',toNode='SmoothWorker')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TestSliders.py")
