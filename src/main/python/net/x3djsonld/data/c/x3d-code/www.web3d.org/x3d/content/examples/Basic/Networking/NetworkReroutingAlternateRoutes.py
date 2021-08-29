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
    meta(content='NetworkReroutingAlternateRoutes.x3d',name='title'),
    meta(content='This scene demonstrates that even though a minimal interference secondary route has been identified in case of link failure, (a) both routes may be invalid due to an overlap at a critical link, and (b) some reasonable third path may exist to route packets. Note that the hop count is larger (by 1) for each successive route. By pushing the right rear button, the critical link that overlaps the primary and secondary route will turn red opaque.',name='description'),
    meta(content='Bill Fischer',name='creator'),
    meta(content='Xeena',name='translator'),
    meta(content='20 October 2019',name='modified'),
    meta(content='20 October 2019',name='modified'),
    meta(content='NetworkReroutingAlternateRoutes.png',name='Image'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Networking/NetworkReroutingAlternateRoutes.x3d',name='identifier'),
    meta(content='NetworkReroutingRoutes.x3d',name='reference'),
    meta(content='NetworkReroutingNetwork.x3d',name='reference'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='NetworkReroutingAlternateRoutes.x3d'),
    Viewpoint(DEF='default',description='Network Rerouting Alternate Routes',orientation=(1,0,0,-.5),position=(0,6,10)),
    Group(DEF='default_network',
      children=[
      Transform(
        children=[
        Inline(DEF='network',url=["NetworkReroutingNetwork.x3d","https://www.web3d.org/x3d/content/examples/Basic/Networking/NetworkReroutingNetwork.x3d","NetworkReroutingNetwork.wrl","https://www.web3d.org/x3d/content/examples/Basic/Networking/NetworkReroutingNetwork.wrl"])])]),
    Group(
      children=[
      Transform(
        children=[
        Inline(DEF='routes',url=["NetworkReroutingRoutes.x3d","https://www.web3d.org/x3d/content/examples/Basic/Networking/NetworkReroutingRoutes.x3d","NetworkReroutingRoutes.wrl","https://www.web3d.org/x3d/content/examples/Basic/Networking/NetworkReroutingRoutes.wrl"])])]),
    Group(
      children=[
      Transform(rotation=(0,1,0,-.785),translation=(-3,-.5,1),
        children=[
        Transform(rotation=(0,0,1,1.57),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(DEF='pipe_material',diffuseColor=(.8,0,0),transparency=1)),
            geometry=Cylinder(radius=.1))])]),
      Transform(rotation=(0,1,0,.785),translation=(-1,-.5,1),
        children=[
        Transform(rotation=(0,0,1,1.57),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(DEF='pipe_material2',diffuseColor=(.8,0,0),transparency=1)),
            geometry=Cylinder(radius=.1))])]),
      Transform(rotation=(0,1,0,.785),translation=(-3,-.5,3),
        children=[
        Transform(rotation=(0,0,1,1.57),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='pipe_material2')),
            geometry=Cylinder(radius=.1))])]),
      Transform(rotation=(0,1,0,-.785),translation=(-3,-.5,1),
        children=[
        Transform(rotation=(0,0,1,1.57),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='pipe_material2')),
            geometry=Cylinder(radius=.1))])]),
      Transform(),
      Transform(scale=(.4,.4,.4),translation=(4,-.5,-6),
        children=[
        Group(
          children=[
          Transform(scale=(1,1.5,1),translation=(0,-.5,0),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(.5,.5,.5))),
              geometry=Box(),)]),
          Shape(
            appearance=Appearance(
              material=Material(emissiveColor=(1,0,0))),
            geometry=Cylinder(height=2.5,radius=.5)),
          TouchSensor(DEF='red_pipe',description='#1 red pipe touchsensor'),
          Transform(translation=(0,11,0),
            children=[
            Billboard(
              children=[
              Shape(
                geometry=Text(string=["Link Error"],
                  fontStyle=FontStyle(horizontal=False,style_='BOLD')),
                appearance=Appearance(
                  material=Material(emissiveColor=(1,0,0))))])])]),
        Group(
          children=[
          Transform(scale=(1,1.5,1),translation=(3,-.5,0),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(.5,.5,.5))),
              geometry=Box(),)]),
          Transform(translation=(3,0,0),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(emissiveColor=(1,0,0))),
              geometry=Cylinder(height=2.5,radius=.5)),
            TouchSensor(DEF='red_pipe2',description='#2 red pipe touchsensor')]),
          Transform(translation=(3,11,0),
            children=[
            Billboard(
              children=[
              Shape(
                geometry=Text(string=["Node Error"],
                  fontStyle=FontStyle(horizontal=False,style_='BOLD')),
                appearance=Appearance(
                  material=Material(emissiveColor=(1,0,0))))])])])]),
      Script(DEF='linkFailure',
        field=[
        field(accessType='inputOnly',name='toggle',type='SFBool'),
        field(accessType='initializeOnly',name='state',type='SFBool',value=False),
        field(accessType='outputOnly',name='toggleValue',type='SFFloat'),
        field(accessType='initializeOnly',name='transState',type='SFFloat',value=1),
        field(accessType='outputOnly',name='transparency',type='SFFloat')]),
      Script(DEF='nodeFailure',
        field=[
        field(accessType='inputOnly',name='toggle',type='SFBool'),
        field(accessType='initializeOnly',name='state',type='SFBool',value=False),
        field(accessType='outputOnly',name='toggleValue',type='SFFloat'),
        field(accessType='initializeOnly',name='transState',type='SFFloat',value=1),
        field(accessType='outputOnly',name='transparency',type='SFFloat')])]),
    ROUTE(fromField='isActive',fromNode='red_pipe',toField='toggle',toNode='linkFailure'),
    ROUTE(fromField='toggleValue',fromNode='linkFailure',toField='transparency',toNode='pipe_material'),
    ROUTE(fromField='transparency',fromNode='linkFailure',toField='transparency',toNode='pipe_material'),
    ROUTE(fromField='isActive',fromNode='red_pipe2',toField='toggle',toNode='nodeFailure'),
    ROUTE(fromField='toggleValue',fromNode='nodeFailure',toField='transparency',toNode='pipe_material2'),
    ROUTE(fromField='transparency',fromNode='nodeFailure',toField='transparency',toNode='pipe_material2')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for NetworkReroutingAlternateRoutes.py")
