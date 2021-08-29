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
    meta(content='MaterialChoiceExample.x3d',name='title'),
    meta(content='Example for toggle-able Material node that can choose among an array of material nodes, and is switchable at run time.',name='description'),
    meta(content='Don Brutzman and MV4205 class',name='creator'),
    meta(content='2 May 2004',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='MaterialChoicePrototype.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/MaterialChoiceExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(name='MaterialChoice',url=["MaterialChoicePrototype.x3d#MaterialChoice","https://savage.nps.edu/Savage/Tools/Animation/MaterialChoicePrototype.x3d#MaterialChoice","MaterialChoicePrototype.wrl#MaterialChoice","https://savage.nps.edu/Savage/Tools/Animation/MaterialChoicePrototype.wrl#MaterialChoice"],
      field=[
      field(accessType='inputOnly',name='set_index',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='which Material node is chosen, with array index starting at 0',name='index',type='SFInt32'),
      field(accessType='outputOnly',name='index_changed',type='SFInt32'),
      field(accessType='inputOnly',name='set_fraction',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='fraction to interpolate between current and next Material node (if any) across all field values.',name='fraction',type='SFFloat'),
      field(accessType='inputOnly',name='next',type='SFBool'),
      field(accessType='inputOnly',name='previous',type='SFBool'),
      field(accessType='initializeOnly',appinfo='array of available Material nodes defaults to zeroth Material',name='materials',type='MFNode'),
      field(accessType='inputOnly',appinfo='append another Material node to materials array',name='appendMaterial',type='SFNode'),
      field(accessType='inputOnly',appinfo='delete Material node indicated by input index value',name='deleteMaterial',type='SFInt32'),
      field(accessType='inputOnly',appinfo='deletes all Material nodes resets scene to default Material values defined in X3D Specification',name='deleteAllMaterials',type='SFBool')]),
    #  ==================== 
    Viewpoint(description='MaterialChoice index is sequenced to change selected Material value',position=(0,0,6)),
    Transform(DEF='RotateBox',rotation=(1,0,0,0.79),
      children=[
      Transform(rotation=(0,1,0,0.79),
        children=[
        Shape(
          geometry=Box(),
          appearance=Appearance(
            material=ProtoInstance(DEF='MC',name='MaterialChoice',
              fieldValue=[
              fieldValue(name='index',value=0),
              fieldValue(name='fraction',value=0.0),
              fieldValue(name='materials',
                children=[
                Material(ambientIntensity=0.24,diffuseColor=(1,0.452381,0.40339),shininess=0.9,specularColor=(0.686486,0.396903,0.419275),
                  #  Universal Media Library: ArtDeco 3 
                  ),
                Material(ambientIntensity=0.24,diffuseColor=(0.330519,0.3389,0.6),shininess=0.78,specularColor=(0.290909,0.290909,0.290909),
                  #  Universal Media Library: ArtDeco 8 
                  ),
                Material(ambientIntensity=0.25,diffuseColor=(0,0.251004,0.239248),shininess=0.06,specularColor=(0.177935,0.249369,0.229278),
                  #  Universal Media Library: ArtDeco 19 
                  )])])))])]),
    #  other tests 
    Group(DEF='AnimationGroup',
      #  Animate the MaterialChoice automatically 
      children=[
      TimeSensor(DEF='Clock',cycleInterval=2,enabled=False,loop=True),
      BooleanTrigger(DEF='TriggerNext'),
      ROUTE(fromField='cycleTime',fromNode='Clock',toField='set_triggerTime',toNode='TriggerNext'),
      ROUTE(fromField='triggerTrue',fromNode='TriggerNext',toField='next',toNode='MC'),
      #  iff another action starts (i.e. touch true), then negate value and stop clock 
      BooleanFilter(DEF='ClockStopper'),
      BooleanFilter(DEF='ClockStopperFilter'),
      ROUTE(fromField='inputTrue',fromNode='ClockStopper',toField='set_boolean',toNode='ClockStopperFilter'),
      ROUTE(fromField='inputNegate',fromNode='ClockStopperFilter',toField='enabled',toNode='Clock')]),
    Transform(DEF='TestNext',translation=(-2.5,2,0),
      children=[
      Billboard(axisOfRotation=(0,0,0),
        children=[
        Shape(
          geometry=Text(string=["next"],
            fontStyle=FontStyle(DEF='FS',size=0.6)),
          appearance=Appearance(
            material=Material(diffuseColor=(0,0.9,0)))),
        TouchSensor(DEF='TouchNext',description='touch for next Material'),
        ROUTE(fromField='isActive',fromNode='TouchNext',toField='set_boolean',toNode='ClockStopper'),
        ROUTE(fromField='isActive',fromNode='TouchNext',toField='next',toNode='MC')])]),
    Transform(DEF='TestPrevious',translation=(1,2,0),
      children=[
      Billboard(axisOfRotation=(0,0,0),
        children=[
        Shape(
          geometry=Text(string=["previous"],
            fontStyle=FontStyle(USE='FS')),
          appearance=Appearance(
            material=Material(diffuseColor=(0.9,0,0)))),
        TouchSensor(DEF='TouchPrevious',description='touch for previous Material'),
        ROUTE(fromField='isActive',fromNode='TouchPrevious',toField='set_boolean',toNode='ClockStopper'),
        ROUTE(fromField='isActive',fromNode='TouchPrevious',toField='previous',toNode='MC')])]),
    Transform(DEF='TestLoop',translation=(-3,-2,0),
      children=[
      Billboard(axisOfRotation=(0,0,0),
        children=[
        Shape(
          geometry=Text(string=["loop"],
            fontStyle=FontStyle(USE='FS')),
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0.9)))),
        TouchSensor(DEF='TouchLoop',description='touch to loop through Materials'),
        BooleanToggle(DEF='ToggleLoop'),
        ROUTE(fromField='isActive',fromNode='TouchLoop',toField='set_boolean',toNode='ToggleLoop'),
        ROUTE(fromField='toggle_changed',fromNode='ToggleLoop',toField='enabled',toNode='Clock')])]),
    Transform(DEF='TestAppend',translation=(1,-2,0),
      children=[
      Billboard(axisOfRotation=(0,0,0),
        children=[
        Shape(
          geometry=Text(string=["append"],
            fontStyle=FontStyle(USE='FS')),
          appearance=Appearance(
            material=Material(diffuseColor=(0.6,0.6,0)))),
        TouchSensor(DEF='TouchAppend',description='touch to add a new Material'),
        Script(DEF='AddNewMaterialScript',directOutput=True,
          field=[
          field(accessType='inputOnly',name='generateAndAppendMaterial',type='SFBool'),
          field(accessType='outputOnly',name='newMaterial',type='SFNode'),
          field(accessType='initializeOnly',name='defaultMaterial',type='SFNode',
            children=[
            Material(),]),
          field(accessType='initializeOnly',name='traceEnabled',type='SFBool',value=False)]),
        ROUTE(fromField='isActive',fromNode='TouchAppend',toField='set_boolean',toNode='ClockStopper'),
        ROUTE(fromField='isActive',fromNode='TouchAppend',toField='generateAndAppendMaterial',toNode='AddNewMaterialScript'),
        ROUTE(fromField='newMaterial',fromNode='AddNewMaterialScript',toField='appendMaterial',toNode='MC')])]),
    Transform(DEF='TestDeleteOne',translation=(-3,0,0),
      children=[
      Transform(
        children=[
        Billboard(axisOfRotation=(0,0,0),
          children=[
          Shape(
            geometry=Text(string=["delete"],
              fontStyle=FontStyle(USE='FS')),
            appearance=Appearance(
              material=Material(),))])]),
      Transform(DEF='TestDelete0',translation=(0,-0.5,0),
        children=[
        Billboard(axisOfRotation=(0,0,0),
          children=[
          Shape(
            geometry=Text(string=["0"],
              fontStyle=FontStyle(USE='FS')),
            appearance=Appearance(
              material=Material(),))]),
        TouchSensor(DEF='TouchDelete0',description='touch to delete Material[0]'),
        IntegerTrigger(DEF='TouchDelete0Trigger',integerKey=0),
        ROUTE(fromField='isActive',fromNode='TouchDelete0',toField='set_boolean',toNode='ClockStopper'),
        ROUTE(fromField='isActive',fromNode='TouchDelete0',toField='set_boolean',toNode='TouchDelete0Trigger'),
        ROUTE(fromField='triggerValue',fromNode='TouchDelete0Trigger',toField='deleteMaterial',toNode='MC')]),
      Transform(DEF='TestDelete1',translation=(0.5,-0.5,0),
        children=[
        Billboard(axisOfRotation=(0,0,0),
          children=[
          Shape(
            geometry=Text(string=["1"],
              fontStyle=FontStyle(USE='FS')),
            appearance=Appearance(
              material=Material(),))]),
        TouchSensor(DEF='TouchDelete2',description='touch to delete Material[1]'),
        IntegerTrigger(DEF='TouchDelete2Trigger',integerKey=1),
        ROUTE(fromField='isActive',fromNode='TouchDelete2',toField='set_boolean',toNode='ClockStopper'),
        ROUTE(fromField='isActive',fromNode='TouchDelete2',toField='set_boolean',toNode='TouchDelete2Trigger'),
        ROUTE(fromField='triggerValue',fromNode='TouchDelete2Trigger',toField='deleteMaterial',toNode='MC')]),
      Transform(DEF='TestDelete2',translation=(1,-0.5,0),
        children=[
        Billboard(axisOfRotation=(0,0,0),
          children=[
          Shape(
            geometry=Text(string=["2"],
              fontStyle=FontStyle(USE='FS')),
            appearance=Appearance(
              material=Material(),))]),
        TouchSensor(DEF='TouchDelete1',description='touch to delete Material[2]'),
        IntegerTrigger(DEF='TouchDelete1Trigger',integerKey=1),
        ROUTE(fromField='isActive',fromNode='TouchDelete1',toField='set_boolean',toNode='ClockStopper'),
        ROUTE(fromField='isActive',fromNode='TouchDelete1',toField='set_boolean',toNode='TouchDelete1Trigger'),
        ROUTE(fromField='triggerValue',fromNode='TouchDelete1Trigger',toField='deleteMaterial',toNode='MC')])]),
    Transform(DEF='TestDeleteAll',translation=(1.8,0,0),
      children=[
      Billboard(axisOfRotation=(0,0,0),
        children=[
        Shape(
          geometry=Text(string=["delete"," all"],
            fontStyle=FontStyle(USE='FS')),
          appearance=Appearance(
            material=Material(),)),
        TouchSensor(DEF='TouchDeleteAll',description='touch to delete all Materials'),
        ROUTE(fromField='isActive',fromNode='TouchDeleteAll',toField='set_boolean',toNode='ClockStopper'),
        ROUTE(fromField='isActive',fromNode='TouchDeleteAll',toField='deleteAllMaterials',toNode='MC')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MaterialChoiceExample.py")
