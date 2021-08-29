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
    meta(content='TestPositionFollower.x3d',name='title'),
    meta(content='X3D Follower example',name='description'),
    meta(content='Herbert Stocker',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='18 April 2006',name='created'),
    meta(content='2 December 2011',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='originals/test_PosFollower.wrl',name='reference'),
    meta(content='Stocker_06_Followers.pdf',name='reference'),
    meta(content='http://www.hersto.com/Publications/Followers',name='reference'),
    meta(content='X3D version 3.2 or greater',name='requires'),
    meta(content='X3D Follower Chaser Damper',name='subject'),
    meta(content='under development, instantReality works but BS Contact fails silently',name='warning'),
    meta(content='https://www.web3d.org/x3d/specifications/ISO-IEC-19775-1.2-X3D-AbstractSpecification/Part01/components/followers.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Followers/TestPositionFollower.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TestPositionFollower.x3d'),
    Viewpoint(description='TestPositionFollower',fieldOfView=0.716,position=(0.0,0.0,15.0)),
    NavigationInfo(type=["NONE"]),
    Group(
      children=[
      PlaneSensor(DEF='PlaneSensorPosition',description='touch to activate'),
      Transform(translation=(0.0,0.0,-0.05),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(ambientIntensity=0.0333,diffuseColor=(0.0,0.0,0.0),emissiveColor=(0.177,0.19,0.208),shininess=0.54)),
          geometry=Box(size=(10.0,10.0,0.1)))])]),
    Transform(DEF='TrObjectDirect',scale=(0.8,0.8,0.8),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(ambientIntensity=0.0333,diffuseColor=(0.02,0.24,0.53),emissiveColor=(0.01,0.12,0.27),shininess=0.54,specularColor=(0.32,0.4,0.4))),
        geometry=Sphere(DEF='GeomObject',radius=0.3))]),
    ROUTE(fromField='trackPoint_changed',fromNode='PlaneSensorPosition',toField='translation',toNode='TrObjectDirect'),
    Switch(DEF='SwObjectDampered',whichChoice=0,
      children=[
      Transform(DEF='TrObjectDampered',
        children=[
        Shape(
          appearance=Appearance(DEF='AppObjectDampered',
            material=Material(ambientIntensity=0.0333,diffuseColor=(0.53,0.02,0.24),emissiveColor=(0.27,0.01,0.12),shininess=0.54,specularColor=(0.4,0.32,0.4))),
          geometry=Sphere(USE='GeomObject'))])]),
    PositionDamper(DEF='PositionDamperNode'),
    ROUTE(fromField='trackPoint_changed',fromNode='PlaneSensorPosition',toField='set_destination',toNode='PositionDamperNode'),
    ROUTE(fromField='value_changed',fromNode='PositionDamperNode',toField='translation',toNode='TrObjectDampered'),
    Switch(DEF='SwObjectFollowed',whichChoice=0,
      children=[
      Transform(DEF='TrObjectFollowed',
        children=[
        Shape(
          appearance=Appearance(DEF='AppObjectFollowed',
            material=Material(ambientIntensity=0.0333,diffuseColor=(0.24,0.53,0.02),emissiveColor=(0.12,0.27,0.01),shininess=0.54,specularColor=(0.4,0.4,0.32))),
          geometry=Sphere(USE='GeomObject'))])]),
    PositionChaser(DEF='PositionChaserNode',duration=1.5),
    ROUTE(fromField='trackPoint_changed',fromNode='PlaneSensorPosition',toField='set_destination',toNode='PositionChaserNode'),
    ROUTE(fromField='value_changed',fromNode='PositionChaserNode',toField='translation',toNode='TrObjectFollowed'),
    ProtoDeclare(name='ToggleButton',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='HottColor',type='SFColor',value=(0.8,0.8,0.3)),
        field(accessType='initializeOnly',name='initiallyOn',type='SFBool',value=False),
        field(accessType='initializeOnly',name='ColdColor',type='SFColor',value=(0.2,0.2,0.0)),
        field(accessType='outputOnly',name='isOn',type='SFBool')]),
      ProtoBody=ProtoBody(
        children=[
        Transform(scale=(0.4,0.4,0.4),
          children=[
          TouchSensor(DEF='TouchPosition',description='move ball to demonstrate PositionChaser2D, PositionDamper2D'),
          Shape(DEF='ShRect',
            appearance=Appearance(
              material=Material(DEF='Mat',ambientIntensity=0.04,diffuseColor=(0.0,0.0,0.0),shininess=0.11)),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],
              coord=Coordinate(point=[(-1,-1,0),(1,-1,0),(1,1,0),(-1,1,0)])))]),
        Script(DEF='ScrToggleButton',
          field=[
          field(accessType='inputOnly',name='TS_Touched',type='SFTime'),
          field(accessType='outputOnly',name='Color',type='SFColor'),
          field(accessType='outputOnly',name='isOn',type='SFBool'),
          field(accessType='initializeOnly',name='ColdColor',type='SFColor'),
          field(accessType='outputOnly',name='Tau',type='SFFloat'),
          field(accessType='initializeOnly',name='initiallyOn',type='SFBool'),
          field(accessType='inputOnly',name='DamperSThere',type='SFBool'),
          field(accessType='initializeOnly',name='HottColor',type='SFColor')],
          IS=IS(
            connect=[
            connect(nodeField='isOn',protoField='isOn'),
            connect(nodeField='ColdColor',protoField='ColdColor'),
            connect(nodeField='initiallyOn',protoField='initiallyOn'),
            connect(nodeField='HottColor',protoField='HottColor')])),
        ColorDamper(DEF='ColorDamperNode',order=1)])),
    Transform(translation=(-5.7,4.0,0.0),
      children=[
      ProtoInstance(DEF='BtnDamper',name='ToggleButton',
        fieldValue=[
        fieldValue(name='HottColor',value=(0.8,0.03,0.36)),
        fieldValue(name='initiallyOn',value=True),
        fieldValue(name='ColdColor',value=(0.2,0.0080,0.09))])]),
    Transform(translation=(-8.0,3.9,0.0),
      children=[
      Shape(
        appearance=Appearance(DEF='AppLabels',
          material=Material(diffuseColor=(0.0,0.0,0.0),emissiveColor=(0.8,0.8,0.8))),
        geometry=Text(string=["Damper"],
          fontStyle=FontStyle(DEF='FntLabels',family=["Arial","SANS"],size=0.5)))]),
    Transform(translation=(-5.7,2.8,0.0),
      children=[
      ProtoInstance(DEF='BtnChaser',name='ToggleButton',
        fieldValue=[
        fieldValue(name='HottColor',value=(0.36,0.8,0.03)),
        fieldValue(name='initiallyOn',value=True),
        fieldValue(name='ColdColor',value=(0.09,0.2,0.0080))])]),
    Transform(translation=(-8.0,2.7,0.0),
      children=[
      Shape(
        appearance=Appearance(USE='AppLabels'),
        geometry=Text(string=["Chaser"],
          fontStyle=FontStyle(USE='FntLabels')))]),
    Script(DEF='ScrBtnMgr',
      field=[
      field(accessType='inputOnly',name='BtnChaserIsOn',type='SFBool'),
      field(accessType='outputOnly',name='WcDamper',type='SFInt32'),
      field(accessType='outputOnly',name='WcChaser',type='SFInt32'),
      field(accessType='inputOnly',name='BtnDamperIsOn',type='SFBool')]),
    ROUTE(fromField='isOn',fromNode='BtnDamper',toField='BtnDamperIsOn',toNode='ScrBtnMgr'),
    ROUTE(fromField='isOn',fromNode='BtnChaser',toField='BtnChaserIsOn',toNode='ScrBtnMgr'),
    ROUTE(fromField='WcDamper',fromNode='ScrBtnMgr',toField='whichChoice',toNode='SwObjectDampered'),
    ROUTE(fromField='WcChaser',fromNode='ScrBtnMgr',toField='whichChoice',toNode='SwObjectFollowed'),
    Switch(DEF='SwDamperTrail',whichChoice=0,
      children=[
      Group(DEF='GrDamperTrail')]),
    Switch(DEF='SwChaserTrail',whichChoice=0,
      children=[
      Group(DEF='GrChaserTrail')]),
    TimeSensor(DEF='TmrTrail',cycleInterval=0.020000000000000004,loop=True),
    Script(DEF='ScrTrailer',directOutput=True,
      field=[
      field(accessType='initializeOnly',name='cShapeDamperTrailPoint',type='SFNode',
        children=[
        Shape(
          appearance=Appearance(USE='AppObjectDampered'),
          geometry=Sphere(DEF='GeomTrail',radius=0.1))]),
      field(accessType='initializeOnly',name='lastDamperPos',type='SFVec3f',value=(0.0,0.0,0.0)),
      field(accessType='initializeOnly',name='ChaserTrails',type='MFNode',
        #  no initialization nodes since this is a local field to hold content 
        ),
      field(accessType='initializeOnly',name='cShapeChaserTrailPoint',type='SFNode',
        children=[
        Shape(
          appearance=Appearance(USE='AppObjectFollowed'),
          geometry=Sphere(USE='GeomTrail'))]),
      field(accessType='initializeOnly',name='DamperTrails',type='MFNode',
        #  no initialization nodes since this is a local field to hold content 
        ),
      field(accessType='initializeOnly',name='GrChaserTrail',type='SFNode',
        children=[
        Group(USE='GrChaserTrail')]),
      field(accessType='inputOnly',name='ChaserPos',type='SFVec3f'),
      field(accessType='initializeOnly',name='cNumTrailPoints',type='SFInt32',value=35),
      field(accessType='initializeOnly',name='lastChaserPos',type='SFVec3f',value=(0.0,0.0,0.0)),
      field(accessType='inputOnly',name='Tick',type='SFTime'),
      field(accessType='inputOnly',name='DamperPos',type='SFVec3f'),
      field(accessType='initializeOnly',name='GrDamperTrail',type='SFNode',
        children=[
        Group(USE='GrDamperTrail')])]),
    ROUTE(fromField='cycleTime',fromNode='TmrTrail',toField='Tick',toNode='ScrTrailer'),
    ROUTE(fromField='translation',fromNode='TrObjectDampered',toField='DamperPos',toNode='ScrTrailer'),
    ROUTE(fromField='translation',fromNode='TrObjectFollowed',toField='ChaserPos',toNode='ScrTrailer'),
    ROUTE(fromField='WcDamper',fromNode='ScrBtnMgr',toField='whichChoice',toNode='SwDamperTrail'),
    ROUTE(fromField='WcChaser',fromNode='ScrBtnMgr',toField='whichChoice',toNode='SwChaserTrail')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TestPositionFollower.py")
