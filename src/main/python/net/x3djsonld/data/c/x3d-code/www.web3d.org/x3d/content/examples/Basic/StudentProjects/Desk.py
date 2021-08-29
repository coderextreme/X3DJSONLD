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
    meta(content='Desk.x3d',name='title'),
    meta(content='A reusable desk prototype - click on drawers to open/shut.',name='description'),
    meta(content='Frederic Roussille',name='creator'),
    meta(content='1 April 2001',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Desk.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Desk.x3d'),
    ProtoDeclare(name='Desk',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='diffuseColor',type='SFColor',value=(0.5,0.4,0.2))]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          #  top of the desk 
          children=[
          Shape(
            appearance=Appearance(DEF='desk_color',
              material=Material(DEF='color',
                IS=IS(
                  connect=[
                  connect(nodeField='diffuseColor',protoField='diffuseColor')]))),
            geometry=Box(size=(20,1,13))),
          Transform(translation=(0,-5,-6),
            #  back of the desk 
            children=[
            Shape(
              appearance=Appearance(USE='desk_color'),
              geometry=Box(size=(20,10,1)))]),
          #  left box 
          Transform(rotation=(1,0,0,1.57),translation=(-10,-10,-6.5),
            children=[
            Shape(
              appearance=Appearance(USE='desk_color'),
              geometry=IndexedFaceSet(DEF='box',coordIndex=[0,1,2,3,-1,1,5,6,2,-1,5,4,7,6,-1,4,0,3,7,-1,4,5,1,0,-1,9,8,11,10,-1,13,9,10,14,-1,12,13,14,15,-1,8,12,15,3,-1,9,13,12,8,-1,3,2,10,11,-1,2,6,14,10,-1,6,7,15,14,-1,7,3,11,15,-1],
                coord=Coordinate(point=[(0,0,0),(5,0,0),(5,12.5,0),(0,12.5,0),(0,0,-9.5),(5,0,-9.5),(5,12.5,-9.5),(0,12.5,-9.5),(0.5,0.5,-0.5),(4.5,0.5,-0.5),(4.5,12.5,-0.5),(0.5,12.5,-0.5),(0.5,0.5,-9),(4.5,0.5,-9),(4.5,12.5,-9),(0.5,12.5,-9)])))]),
          #  right box 
          Transform(rotation=(1,0,0,1.57),translation=(5,-10,-6.5),
            children=[
            Shape(
              appearance=Appearance(USE='desk_color'),
              geometry=IndexedFaceSet(USE='box'))]),
          #  drawers 
          Transform(DEF='drawer1',translation=(-9.5,-5.25,6),
            children=[
            Group(DEF='drawer',
              children=[
              Transform(scale=(0.8,0.34,1.2105),
                children=[
                Shape(
                  appearance=Appearance(USE='desk_color'),
                  geometry=IndexedFaceSet(USE='box'))]),
              Transform(rotation=(1,0,0,1.57),translation=(1,2.125,-0.05),
                children=[
                Shape(
                  appearance=Appearance(DEF='gray',
                    material=Material(diffuseColor=(0.5,0.5,0.5))),
                  geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.1,0),(0.092,-0.038),(0.071,-0.071),(0.038,-0.092),(0,-0.1),(-0.038,-0.092),(-0.071,-0.071),(-0.092,-0.038),(-0.1,0),(-0.092,0.038),(-0.071,0.071),(-0.038,0.092),(0,0.1),(0.038,0.092),(0.071,0.071),(0.092,0.038),(0.1,0)],spine=[(0,0,0),(0.5,0.5,0),(1.5,0.5,0),(2,0,0)]))])]),
            TouchSensor(DEF='touch_drawer1',description='touch to open close')]),
          Transform(DEF='drawer2',translation=(-9.5,-9.5,6),
            children=[
            Group(USE='drawer'),
            TouchSensor(DEF='touch_drawer2',description='touch to open close')]),
          Transform(DEF='drawer3',translation=(5.5,-5.25,6),
            children=[
            Group(USE='drawer'),
            TouchSensor(DEF='touch_drawer3',description='touch to open close')]),
          Transform(DEF='drawer4',translation=(5.5,-9.5,6),
            children=[
            Group(USE='drawer'),
            TouchSensor(DEF='touch_drawer4',description='touch to open close')]),
          Group(DEF='AnimationGroup',
            #  path for drawer 1 
            children=[
            TimeSensor(DEF='clock1'),
            PositionInterpolator(DEF='drawer1_path',key=[0,1],keyValue=[(0,0,0),(0,0,0)]),
            Script(DEF='drawer1_path_js',
              field=[
              field(accessType='inputOnly',name='set_path',type='SFTime'),
              field(accessType='outputOnly',name='keyValue_changed',type='MFVec3f'),
              field(accessType='initializeOnly',name='open',type='SFBool',value=False)]),
            #  path for drawer 3 
            TimeSensor(DEF='clock3'),
            PositionInterpolator(DEF='drawer3_path',key=[0,1],keyValue=[(0,0,0),(0,0,0)]),
            Script(DEF='drawer3_path_js',
              field=[
              field(accessType='inputOnly',name='set_path',type='SFTime'),
              field(accessType='outputOnly',name='keyValue_changed',type='MFVec3f'),
              field(accessType='initializeOnly',name='open',type='SFBool',value=False)]),
            #  path for drawer 2 
            TimeSensor(DEF='clock2'),
            PositionInterpolator(DEF='drawer2_path',key=[0,1],keyValue=[(0,0,0),(0,0,0)]),
            Script(DEF='drawer2_path_js',
              field=[
              field(accessType='inputOnly',name='set_path',type='SFTime'),
              field(accessType='outputOnly',name='keyValue_changed',type='MFVec3f'),
              field(accessType='initializeOnly',name='open',type='SFBool',value=False)]),
            #  path for drawer 4 
            TimeSensor(DEF='clock4'),
            PositionInterpolator(DEF='drawer4_path',key=[0,1],keyValue=[(0,0,0),(0,0,0)]),
            Script(DEF='drawer4_path_js',
              field=[
              field(accessType='inputOnly',name='set_path',type='SFTime'),
              field(accessType='outputOnly',name='keyValue_changed',type='MFVec3f'),
              field(accessType='initializeOnly',name='open',type='SFBool',value=False)]),
            #  Routes for drawer 1 
            ROUTE(fromField='touchTime',fromNode='touch_drawer1',toField='startTime',toNode='clock1'),
            ROUTE(fromField='touchTime',fromNode='touch_drawer1',toField='set_path',toNode='drawer1_path_js'),
            ROUTE(fromField='keyValue_changed',fromNode='drawer1_path_js',toField='set_keyValue',toNode='drawer1_path'),
            ROUTE(fromField='fraction_changed',fromNode='clock1',toField='set_fraction',toNode='drawer1_path'),
            ROUTE(fromField='value_changed',fromNode='drawer1_path',toField='set_translation',toNode='drawer1'),
            #  Routes for drawer 3 
            ROUTE(fromField='touchTime',fromNode='touch_drawer3',toField='startTime',toNode='clock3'),
            ROUTE(fromField='touchTime',fromNode='touch_drawer3',toField='set_path',toNode='drawer3_path_js'),
            ROUTE(fromField='keyValue_changed',fromNode='drawer3_path_js',toField='set_keyValue',toNode='drawer3_path'),
            ROUTE(fromField='fraction_changed',fromNode='clock3',toField='set_fraction',toNode='drawer3_path'),
            ROUTE(fromField='value_changed',fromNode='drawer3_path',toField='set_translation',toNode='drawer3'),
            #  Route for drawer 2 
            ROUTE(fromField='touchTime',fromNode='touch_drawer2',toField='startTime',toNode='clock2'),
            ROUTE(fromField='touchTime',fromNode='touch_drawer2',toField='set_path',toNode='drawer2_path_js'),
            ROUTE(fromField='keyValue_changed',fromNode='drawer2_path_js',toField='set_keyValue',toNode='drawer2_path'),
            ROUTE(fromField='fraction_changed',fromNode='clock2',toField='set_fraction',toNode='drawer2_path'),
            ROUTE(fromField='value_changed',fromNode='drawer2_path',toField='set_translation',toNode='drawer2'),
            #  Route for drawer 4 
            ROUTE(fromField='touchTime',fromNode='touch_drawer4',toField='startTime',toNode='clock4'),
            ROUTE(fromField='touchTime',fromNode='touch_drawer4',toField='set_path',toNode='drawer4_path_js'),
            ROUTE(fromField='keyValue_changed',fromNode='drawer4_path_js',toField='set_keyValue',toNode='drawer4_path'),
            ROUTE(fromField='fraction_changed',fromNode='clock4',toField='set_fraction',toNode='drawer4_path'),
            ROUTE(fromField='value_changed',fromNode='drawer4_path',toField='set_translation',toNode='drawer4')])])])),
    ProtoInstance(name='Desk'),
    Viewpoint(description='Entry',position=(0,0,40))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Desk.py")
