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
    meta(content='Figure09_9DeskLampWithAxes.x3d',name='title'),
    meta(content='Figure 9.9, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch09/09fig09.htm',name='reference'),
    meta(content='Don Brutzman',name='transcriber'),
    meta(content='12 August 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Figure09_9DeskLampWithAxes.SlideshowSnapshot.png',name='Image'),
    meta(content='A desk lamp with arm angles that can be adjusted using nested sensors, with coordinate axes superimposed to show X3D/VRML directions.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter09SensingViewer/Figure09_9DeskLampWithAxes.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure09_9DeskLampWithAxes.x3d'),
    Viewpoint(description='Desk lamp',orientation=(0,1,0,0.29),position=(0.3,0.2,1)),
    #  First rotate PlaneSensor to horizontal XZ (Y = 0) plane 
    Transform(rotation=(1,0,0,1.57),
      children=[
      PlaneSensor(DEF='MOVE_LAMP',description='drag to move lamp',maxPosition=(0.1,0.1),minPosition=(-0.1,-0.1)),
      Transform(DEF='LAMP_TRANSFORM',
        #  Note that we are connecting a chain of behavior engines in these ROUTEs. The event types passed via each ROUTE must each match. 
        children=[
        ROUTE(fromField='translation_changed',fromNode='MOVE_LAMP',toField='set_translation',toNode='LAMP_TRANSFORM'),
        #  Now rotate back so that actual geometry remains in original coordinate system 
        Transform(rotation=(1,0,0,-1.57),
          children=[
          Shape(
            geometry=Cylinder(height=0.01,radius=0.1),
            appearance=Appearance(DEF='WHITE',
              material=Material(diffuseColor=(.9,.9,.9)))),
          Group(
            children=[
            SphereSensor(DEF='MOVE_FIRST_ARM',description='rotate first arm',offset=(1,0,0,-0.7)),
            Transform(DEF='FIRST_ARM_TRANSFORM',center=(0,-0.15,0),rotation=(1,0,0,-0.7),translation=(0,0.15,0),
              children=[
              ROUTE(fromField='rotation_changed',fromNode='MOVE_FIRST_ARM',toField='set_rotation',toNode='FIRST_ARM_TRANSFORM'),
              Shape(DEF='LAMP_ARM',
                appearance=Appearance(DEF='LIGHT_BROWN',
                  material=Material(diffuseColor=(.6,.6,.2))),
                geometry=Cylinder(height=0.3,radius=0.01)),
              Group(
                children=[
                SphereSensor(DEF='MOVE_SECOND_ARM',description='rotate second arm',offset=(1,0,0,1.9)),
                Transform(DEF='SECOND_ARM_TRANSFORM',center=(0,-0.15,0),rotation=(1,0,0,1.9),translation=(0,0.3,0),
                  children=[
                  ROUTE(fromField='rotation_changed',fromNode='MOVE_SECOND_ARM',toField='set_rotation',toNode='SECOND_ARM_TRANSFORM'),
                  Shape(USE='LAMP_ARM'),
                  Group(
                    children=[
                    SphereSensor(DEF='MOVE_LAMP_SHADE',description='rotate lamp shade',offset=(1,0,0,-1.25)),
                    Transform(DEF='LAMP_SHADE_TRANSFORM',center=(0,0.07,0),rotation=(1,0,0,-1.25),translation=(0,0.075,0),
                      children=[
                      ROUTE(fromField='rotation_changed',fromNode='MOVE_LAMP_SHADE',toField='set_rotation',toNode='LAMP_SHADE_TRANSFORM'),
                      Shape(
                        appearance=Appearance(
                          material=Material(diffuseColor=(.1,.6,.6))),
                        geometry=Cone(bottom=False,bottomRadius=0.12,height=0.15)),
                      Transform(translation=(0,-0.05,0),
                        children=[
                        Shape(
                          appearance=Appearance(
                            material=Material(diffuseColor=(.4,.4,.1),emissiveColor=(.8,.8,.2))),
                          geometry=Sphere(radius=0.05)),
                        SpotLight(beamWidth=1.570796,color=(.8,.8,.1),cutOffAngle=.785398,direction=(0,-1,0))])])])])])])])])])]),
    #  Adding this Inline reference to another scene superimposes X3D/VRML coordinate system axes. 
    Transform(scale=(.25,.25,.25),
      children=[
      Inline(DEF='CoordinateAxes',url=["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure09_9DeskLampWithAxes.py")
