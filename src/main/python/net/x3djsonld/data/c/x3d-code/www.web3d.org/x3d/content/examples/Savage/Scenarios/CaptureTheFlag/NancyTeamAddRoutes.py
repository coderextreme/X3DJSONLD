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
    component(level=1,name='DIS'),
    meta(content='NancyTeamAddRoutes.x3d',name='title'),
    meta(content='Thomas E. Miller',name='creator'),
    meta(content='7 December 2000',name='created'),
    meta(content='6 May 2017',name='modified'),
    meta(content='Human team aggregation for Capture the Flag.',name='description'),
    meta(content='Incomplete translation, work in progress',name='warning'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/CaptureTheFlag/NancyTeamAddRoutes.x3d',name='identifier'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/CaptureTheFlag/.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      EspduTransform(DEF='NancyTeamAddRoutes_EspduTransform',address='224.2.181.145',entityID=40,marking='NancyTeam 40',port=62040,readInterval=0.25,translation=(-10,-200,2240),
        #  traceColor='0 0 1' traceJava='false' traceOffset='0 3 0' traceSize='1 1 1' 
        children=[
        Viewpoint(description='NancyTeam 40 *** Trail',orientation=(0,1,0,-1.571),position=(-10,0.2,0)),
        LOD(range=[30],
          children=[
          Group(
            children=[
            Viewpoint(description='Blue 40 Front',orientation=(0,1,0,1.571),position=(20,0,0)),
            Viewpoint(description='Blue 40 Right Side View',position=(0,0,15))]),
          WorldInfo(info=["null node for LOD to switch out the Viewpoint when distant"])]),
        Switch(DEF='NancyTeamSwap',whichChoice=0,
          children=[
          Transform(translation=(0,1,0),
            children=[
            Shape(
              appearance=Appearance(DEF='BLUE',
                material=Material(diffuseColor=(0,0,1))),
              geometry=Box(size=(2,0.25,0.25))),
            Shape(
              appearance=Appearance(USE='BLUE'),
              geometry=Box(size=(0.25,2,0.25))),
            Shape(
              appearance=Appearance(USE='BLUE'),
              geometry=Box(size=(0.25,0.25,2))),
            Transform(rotation=(0,0,-1,1.571),translation=(1,0,0),
              children=[
              Shape(
                appearance=Appearance(USE='BLUE'),
                geometry=Cone(bottomRadius=0.375,height=1))]),
            Transform(DEF='LeaderTransform',
              children=[
              Inline(DEF='Leader',url=["Leader.x3d","https://savage.nps.edu/Savage/Scenarios/CaptureTheFlag/Leader.x3d","Leader.wrl","https://savage.nps.edu/Savage/Scenarios/CaptureTheFlag/Leader.wrl"])]),
            Transform(DEF='Rifle1Transform',
              children=[
              Inline(DEF='Rifle1',url=["Rifle1.x3d","https://savage.nps.edu/Savage/Scenarios/CaptureTheFlag/Rifle1.x3d","Rifle1.wrl","https://savage.nps.edu/Savage/Scenarios/CaptureTheFlag/Rifle1.wrl"])]),
            Transform(DEF='Rifle2Transform',
              children=[
              Inline(DEF='Rifle2',url=["Rifle2.x3d","https://savage.nps.edu/Savage/Scenarios/CaptureTheFlag/Rifle2.x3d","Rifle2.wrl","https://savage.nps.edu/Savage/Scenarios/CaptureTheFlag/Rifle2.wrl"])]),
            Transform(DEF='AutogunTransform',
              children=[
              Inline(DEF='Autogun',url=["Autogun.x3d","https://savage.nps.edu/Savage/Scenarios/CaptureTheFlag/Autogun.x3d","Autogun.wrl","https://savage.nps.edu/Savage/Scenarios/CaptureTheFlag/Autogun.wrl"])]),
            Transform(DEF='GrenadierTransform',
              children=[
              Inline(DEF='Grenadier',url=["Grenadier.x3d","https://savage.nps.edu/Savage/Scenarios/CaptureTheFlag/Grenadier.x3d","Grenadier.wrl","https://savage.nps.edu/Savage/Scenarios/CaptureTheFlag/Grenadier.wrl"])]),
            Transform(DEF='HueyTransform',
              children=[
              Inline(DEF='Huey',url=["Huey.x3d","https://savage.nps.edu/Savage/Scenarios/CaptureTheFlag/Huey.x3d","Huey.wrl","https://savage.nps.edu/Savage/Scenarios/CaptureTheFlag/Huey.wrl"])]),
            Script(DEF='NancyTeamVisible',mustEvaluate=True,
              field=[
              field(accessType='inputOnly',name='set_Visible',type='SFFloat'),
              field(accessType='outputOnly',name='Visible_changed',type='SFInt32')]),
            Script(DEF='MountLeader',directOutput=True,mustEvaluate=True,
              field=[
              field(accessType='inputOnly',name='mountedState',type='SFFloat'),
              field(accessType='inputOnly',name='translation',type='SFVec3f'),
              field(accessType='outputOnly',name='zeroTranslation',type='SFVec3f'),
              field(accessType='initializeOnly',name='routeLoaded',type='SFBool',value=True),
              field(accessType='initializeOnly',name='routeUnloaded',type='SFBool',value=True),
              field(accessType='initializeOnly',name='thisNode',type='SFNode',
                children=[
                Script(USE='MountLeader')]),
              field(accessType='initializeOnly',name='fromNode',type='SFNode',
                children=[
                EspduTransform(USE='NancyTeamAddRoutes_EspduTransform')]),
              field(accessType='initializeOnly',name='toNode',type='SFNode',
                children=[
                Transform(USE='LeaderTransform')])]),
            Script(DEF='MountRifle1',directOutput=True,mustEvaluate=True,
              field=[
              field(accessType='inputOnly',name='mountedState',type='SFFloat'),
              field(accessType='inputOnly',name='translation',type='SFVec3f'),
              field(accessType='outputOnly',name='zeroTranslation',type='SFVec3f'),
              field(accessType='initializeOnly',name='routeLoaded',type='SFBool',value=True),
              field(accessType='initializeOnly',name='routeUnloaded',type='SFBool',value=True),
              field(accessType='initializeOnly',name='thisNode',type='SFNode',
                children=[
                Script(USE='MountRifle1')]),
              field(accessType='initializeOnly',name='fromNode',type='SFNode',
                children=[
                EspduTransform(USE='NancyTeamAddRoutes_EspduTransform')]),
              field(accessType='initializeOnly',name='toNode',type='SFNode',
                children=[
                Script(USE='MountRifle1')])]),
            Script(DEF='MountRifle2',directOutput=True,mustEvaluate=True,
              field=[
              field(accessType='inputOnly',name='mountedState',type='SFFloat'),
              field(accessType='inputOnly',name='translation',type='SFVec3f'),
              field(accessType='outputOnly',name='zeroTranslation',type='SFVec3f'),
              field(accessType='initializeOnly',name='routeLoaded',type='SFBool',value=True),
              field(accessType='initializeOnly',name='routeUnloaded',type='SFBool',value=True),
              field(accessType='initializeOnly',name='thisNode',type='SFNode',
                children=[
                Script(USE='MountRifle2')]),
              field(accessType='initializeOnly',name='fromNode',type='SFNode',
                children=[
                EspduTransform(USE='NancyTeamAddRoutes_EspduTransform')]),
              field(accessType='initializeOnly',name='toNode',type='SFNode',
                children=[
                Transform(USE='Rifle2Transform')])]),
            Script(DEF='MountAutogun',directOutput=True,mustEvaluate=True,
              field=[
              field(accessType='inputOnly',name='mountedState',type='SFFloat'),
              field(accessType='inputOnly',name='translation',type='SFVec3f'),
              field(accessType='outputOnly',name='zeroTranslation',type='SFVec3f'),
              field(accessType='initializeOnly',name='routeLoaded',type='SFBool',value=True),
              field(accessType='initializeOnly',name='routeUnloaded',type='SFBool',value=True),
              field(accessType='initializeOnly',name='thisNode',type='SFNode',
                children=[
                Script(USE='MountAutogun')]),
              field(accessType='initializeOnly',name='fromNode',type='SFNode',
                children=[
                EspduTransform(USE='NancyTeamAddRoutes_EspduTransform')]),
              field(accessType='initializeOnly',name='toNode',type='SFNode',
                children=[
                Transform(USE='AutogunTransform')])]),
            Script(DEF='MountGrenadier',directOutput=True,mustEvaluate=True,
              field=[
              field(accessType='inputOnly',name='mountedState',type='SFFloat'),
              field(accessType='inputOnly',name='translation',type='SFVec3f'),
              field(accessType='outputOnly',name='zeroTranslation',type='SFVec3f'),
              field(accessType='initializeOnly',name='routeLoaded',type='SFBool',value=True),
              field(accessType='initializeOnly',name='routeUnloaded',type='SFBool',value=True),
              field(accessType='initializeOnly',name='thisNode',type='SFNode',
                children=[
                Script(USE='MountGrenadier')]),
              field(accessType='initializeOnly',name='fromNode',type='SFNode',
                children=[
                EspduTransform(USE='NancyTeamAddRoutes_EspduTransform')]),
              field(accessType='initializeOnly',name='toNode',type='SFNode',
                children=[
                Transform(USE='GrenadierTransform')])]),
            Script(DEF='MountHuey',directOutput=True,mustEvaluate=True,
              field=[
              field(accessType='inputOnly',name='mountedState',type='SFFloat'),
              field(accessType='inputOnly',name='translation',type='SFVec3f'),
              field(accessType='outputOnly',name='zeroTranslation',type='SFVec3f'),
              field(accessType='initializeOnly',name='routeLoaded',type='SFBool',value=True),
              field(accessType='initializeOnly',name='routeUnloaded',type='SFBool',value=True),
              field(accessType='initializeOnly',name='thisNode',type='SFNode',
                children=[
                Script(USE='MountHuey')]),
              field(accessType='initializeOnly',name='fromNode',type='SFNode',
                children=[
                EspduTransform(USE='NancyTeamAddRoutes_EspduTransform')]),
              field(accessType='initializeOnly',name='toNode',type='SFNode',
                children=[
                Transform(USE='HueyTransform')])]),
            ROUTE(fromField='articulationParameterValue0',fromNode='NancyTeamAddRoutes_EspduTransform',toField='set_Visible',toNode='NancyTeamVisible'),
            ROUTE(fromField='Visible_changed',fromNode='NancyTeamVisible',toField='set_whichChoice',toNode='NancyTeamSwap'),
            ROUTE(fromField='articulationParameterValue1',fromNode='NancyTeamAddRoutes_EspduTransform',toField='mountedState',toNode='MountLeader'),
            ROUTE(fromField='translation_changed',fromNode='NancyTeamAddRoutes_EspduTransform',toField='translation',toNode='LeaderTransform'),
            ROUTE(fromField='articulationParameterValue2',fromNode='NancyTeamAddRoutes_EspduTransform',toField='mountedState',toNode='MountRifle1'),
            ROUTE(fromField='translation_changed',fromNode='NancyTeamAddRoutes_EspduTransform',toField='translation',toNode='Rifle1Transform'),
            ROUTE(fromField='articulationParameterValue3',fromNode='NancyTeamAddRoutes_EspduTransform',toField='mountedState',toNode='MountRifle2'),
            ROUTE(fromField='translation_changed',fromNode='NancyTeamAddRoutes_EspduTransform',toField='translation',toNode='Rifle2Transform'),
            ROUTE(fromField='articulationParameterValue4',fromNode='NancyTeamAddRoutes_EspduTransform',toField='mountedState',toNode='MountAutogun'),
            ROUTE(fromField='translation_changed',fromNode='NancyTeamAddRoutes_EspduTransform',toField='translation',toNode='AutogunTransform'),
            ROUTE(fromField='articulationParameterValue5',fromNode='NancyTeamAddRoutes_EspduTransform',toField='mountedState',toNode='MountGrenadier'),
            ROUTE(fromField='translation_changed',fromNode='NancyTeamAddRoutes_EspduTransform',toField='translation',toNode='GrenadierTransform'),
            ROUTE(fromField='articulationParameterValue6',fromNode='NancyTeamAddRoutes_EspduTransform',toField='mountedState',toNode='MountHuey'),
            ROUTE(fromField='translation_changed',fromNode='NancyTeamAddRoutes_EspduTransform',toField='translation',toNode='HueyTransform')])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for NancyTeamAddRoutes.py")
