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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='BooleanSequencerExample.x3d',name='title'),
    meta(content='This example shows how to use the BooleanSequencer prototype in an animated scenario.',name='description'),
    meta(content='Don Brutzman, Estuko Lippi, Jeff Weekley, Jane Wu',name='creator'),
    meta(content='10 August 2001',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#ScalarInterpolator',name='reference'),
    meta(content='boolean sequencer',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/BooleanSequencerExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='BooleanSequencerExample.x3d'),
    Group(DEF='HUDGroup',
      children=[
      ProximitySensor(DEF='WhereSensor',size=(1000,1000,1000)),
      Transform(DEF='BillboardWhereTransform',
        children=[
        Transform(rotation=(1,0,0,-0.03),translation=(0,0,-12),
          children=[
          Billboard(
            children=[
            Transform(DEF='BillboardPlaneTransform',
              children=[
              TouchSensor(DEF='Toucher',description='Click text to start clock and run multiple BooleanSequencers'),
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(0,1,1))),
                geometry=Text(string=["Click text to start clock, run","multiple BooleanSequencers","","","","See Viewpoint description","for bound Viewpoint number"],
                  fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])))])])])]),
      ROUTE(fromField='position_changed',fromNode='WhereSensor',toField='set_translation',toNode='BillboardWhereTransform'),
      ROUTE(fromField='orientation_changed',fromNode='WhereSensor',toField='set_rotation',toNode='BillboardWhereTransform')]),
    TimeSensor(DEF='Clock',cycleInterval=10),
    ROUTE(fromField='touchTime',fromNode='Toucher',toField='set_startTime',toNode='Clock'),
    Viewpoint(DEF='FrontUpViewpoint',description='View 0, Front Up'),
    Group(DEF='AnimatedView1',
      children=[
      Viewpoint(DEF='LeftViewpoint',description='View 1, Left',orientation=(0,1,0,-1.57),position=(-10,0,0)),
      BooleanSequencer(DEF='LeftViewBinder',key=[0,0.1,0.25],keyValue=[False,True,False]),
      ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='LeftViewBinder'),
      ROUTE(fromField='value_changed',fromNode='LeftViewBinder',toField='set_bind',toNode='LeftViewpoint')]),
    Group(DEF='AnimatedView2',
      children=[
      Viewpoint(DEF='BackViewpoint',description='View 2, Back',orientation=(0,1,0,-3.14),position=(0,0,-10)),
      BooleanSequencer(DEF='BackViewBinder',key=[0,0.375,0.475],keyValue=[False,True,False]),
      ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='BackViewBinder'),
      ROUTE(fromField='value_changed',fromNode='BackViewBinder',toField='set_bind',toNode='BackViewpoint')]),
    Group(DEF='AnimatedView3',
      children=[
      Viewpoint(DEF='RightViewpoint',description='View 3, Right',orientation=(0,1,0,1.57),position=(10,0,0)),
      BooleanSequencer(DEF='RightViewBinder',key=[0,0.5,0.6],keyValue=[False,True,False]),
      ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='RightViewBinder'),
      ROUTE(fromField='value_changed',fromNode='RightViewBinder',toField='set_bind',toNode='RightViewpoint')]),
    Group(DEF='AnimatedView4',
      children=[
      Viewpoint(DEF='TopViewpoint',description='View 4, Top',orientation=(1,0,0,-1.57),position=(0,10,0)),
      BooleanSequencer(DEF='TopViewBinder',key=[0.625,0.725],keyValue=[True,False]),
      ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='TopViewBinder'),
      ROUTE(fromField='value_changed',fromNode='TopViewBinder',toField='set_bind',toNode='TopViewpoint')]),
    Group(DEF='AnimatedView5',
      children=[
      Viewpoint(DEF='FrontDownViewpoint',description='View 5, Front Down',orientation=(1,0,0,-3.14),position=(0,0,-10)),
      BooleanSequencer(DEF='FrontDownViewBinder',key=[0.75,0.85],keyValue=[True,False]),
      ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='FrontDownViewBinder'),
      ROUTE(fromField='value_changed',fromNode='FrontDownViewBinder',toField='set_bind',toNode='FrontDownViewpoint')]),
    Group(DEF='AnimatedView6',
      children=[
      Viewpoint(DEF='BottomViewpoint',description='View 6, Bottom',orientation=(1,0,0,1.57),position=(0,-10,0)),
      BooleanSequencer(DEF='BottomViewBinder',key=[0.875,0.975],keyValue=[True,False]),
      ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='BottomViewBinder'),
      ROUTE(fromField='value_changed',fromNode='BottomViewBinder',toField='set_bind',toNode='BottomViewpoint')]),
    Switch(DEF='DebugSwitch',whichChoice=0,
      children=[
      Group(
        children=[
        Script(DEF='Debug',
          field=[
          field(accessType='inputOnly',name='setFraction',type='SFFloat'),
          field(accessType='inputOnly',name='setFrontUpViewBind',type='SFBool'),
          field(accessType='inputOnly',name='setLeftViewBind',type='SFBool'),
          field(accessType='inputOnly',name='setBackViewBind',type='SFBool'),
          field(accessType='inputOnly',name='setRightViewBind',type='SFBool'),
          field(accessType='inputOnly',name='setTopViewBind',type='SFBool'),
          field(accessType='inputOnly',name='setFrontDownViewBind',type='SFBool'),
          field(accessType='inputOnly',name='setBottomViewBind',type='SFBool'),
          field(accessType='inputOnly',name='setFrontUpBSOutput',type='SFBool'),
          field(accessType='inputOnly',name='setLeftBSOutput',type='SFBool'),
          field(accessType='inputOnly',name='setBackBSOutput',type='SFBool'),
          field(accessType='inputOnly',name='setRightBSOutput',type='SFBool'),
          field(accessType='inputOnly',name='setTopBSOutput',type='SFBool'),
          field(accessType='inputOnly',name='setFrontDownBSOutput',type='SFBool'),
          field(accessType='inputOnly',name='setBottomBSOutput',type='SFBool')]),
        ROUTE(fromField='fraction_changed',fromNode='Clock',toField='setFraction',toNode='Debug'),
        ROUTE(fromField='isBound',fromNode='FrontUpViewpoint',toField='setFrontUpViewBind',toNode='Debug'),
        ROUTE(fromField='isBound',fromNode='LeftViewpoint',toField='setLeftViewBind',toNode='Debug'),
        ROUTE(fromField='isBound',fromNode='BackViewpoint',toField='setBackViewBind',toNode='Debug'),
        ROUTE(fromField='isBound',fromNode='RightViewpoint',toField='setRightViewBind',toNode='Debug'),
        ROUTE(fromField='isBound',fromNode='TopViewpoint',toField='setTopViewBind',toNode='Debug'),
        ROUTE(fromField='isBound',fromNode='FrontDownViewpoint',toField='setFrontDownViewBind',toNode='Debug'),
        ROUTE(fromField='isBound',fromNode='BottomViewpoint',toField='setBottomViewBind',toNode='Debug'),
        ROUTE(fromField='value_changed',fromNode='LeftViewBinder',toField='setLeftBSOutput',toNode='Debug'),
        ROUTE(fromField='value_changed',fromNode='BackViewBinder',toField='setBackBSOutput',toNode='Debug'),
        ROUTE(fromField='value_changed',fromNode='RightViewBinder',toField='setRightBSOutput',toNode='Debug'),
        ROUTE(fromField='value_changed',fromNode='TopViewBinder',toField='setTopBSOutput',toNode='Debug'),
        ROUTE(fromField='value_changed',fromNode='FrontDownViewBinder',toField='setFrontDownBSOutput',toNode='Debug'),
        ROUTE(fromField='value_changed',fromNode='BottomViewBinder',toField='setBottomBSOutput',toNode='Debug')])]),
    Transform(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,0))),
        geometry=Box(size=(2,0.1,0.35))),
      Transform(translation=(-1,0,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,0))),
          geometry=Sphere(radius=0.2))]),
      Transform(translation=(1,0,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,1,0))),
          geometry=Sphere(radius=0.2))])]),
    Transform(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1))),
        geometry=Cone(),)])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BooleanSequencerExample.py")
