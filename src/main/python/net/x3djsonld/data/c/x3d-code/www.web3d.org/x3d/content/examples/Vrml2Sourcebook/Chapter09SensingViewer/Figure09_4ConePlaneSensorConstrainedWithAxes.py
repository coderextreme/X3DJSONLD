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
    meta(content='Figure09_4ConePlaneSensorConstrainedWithAxes.x3d',name='title'),
    meta(content='Figure 9.4, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch09/09fig04.htm',name='reference'),
    meta(content='Don Brutzman',name='transcriber'),
    meta(content='9 August 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A cone that translates within a limited range of the XZ plane when the viewer drags it, with coordinate axes superimposed to show X3D/VRML directions. Also see Figure 9.3 for comparison.',name='description'),
    meta(content='Figure09_3ConePlaneSensorWithAxes.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter09SensingViewer/Figure09_4ConePlaneSensorConstrainedWithAxes.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure09_4ConePlaneSensorConstrainedWithAxes.x3d'),
    Viewpoint(description='click and drag Cone',orientation=(0,1,0,0.78),position=(8,1.5,8)),
    Viewpoint(description='Default viewpoint at (0 0 10)'),
    #  Dragging a Reluctant Cube 
    Group(
      children=[
      Transform(rotation=(1,0,0,-1.57),
        children=[
        Transform(DEF='CUBE_TRANSFORM',
          children=[
          Shape(
            geometry=Cone(),
            appearance=Appearance(
              material=Material(diffuseColor=(.5,.5,.5),emissiveColor=(0,.5,0))))]),
        PlaneSensor(DEF='MyPlaneSensor',description='Drag cone stays in XZ plane',maxPosition=(2,2),minPosition=(-2,-2))])]),
    #  Note that we are connecting a translation (Vec3F) output to a translation (Vec3F) input in this ROUTE. 
    ROUTE(fromField='translation_changed',fromNode='MyPlaneSensor',toField='set_translation',toNode='CUBE_TRANSFORM'),
    #  Adding this Inline reference to another scene superimposes X3D/VRML coordinate system axes. 
    Transform(scale=(3,3,3),
      children=[
      Inline(DEF='CoordinateAxes',url=["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"])]),
    Shape(
      geometry=Box(size=(4,0.1,4)),
      appearance=Appearance(
        material=Material(transparency=0.7)))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure09_4ConePlaneSensorConstrainedWithAxes.py")
