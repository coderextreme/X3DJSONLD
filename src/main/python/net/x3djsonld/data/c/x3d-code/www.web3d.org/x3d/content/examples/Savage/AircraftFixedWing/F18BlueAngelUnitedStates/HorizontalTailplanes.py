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
    meta(content='HorizontalTailplanes.x3d',name='title'),
    meta(content='The Horizontal Stabilizer, which can be used in concert with pitch control or differentially for roll control, acting as "tailerons" for enhanced roll performance.',name='description'),
    meta(content='Etsuko Lippi',name='creator'),
    meta(content='23 August 2001',name='created'),
    meta(content='22 October 2018',name='modified'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/HorizontalTailplanes.x3d',name='identifier'),
    meta(content='horisontal tail planes,',name='subject'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(0.5,0.5,0.5)]),
    Transform(scale=(0.4,0.4,0.4),
      children=[
      Transform(DEF='MainWings',scale=(0.16,0.16,0.16),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.1,0.25,0.5),specularColor=(0,0.2,0.3))),
          geometry=Extrusion(DEF='Wing',ccw=False,creaseAngle=3.14,crossSection=[(0.00,1.00),(-5.2,0.00),(4,-.5),(4.6,-.4),(4.8,-.2),(4.9,.1),(4.9,.3),(4.5,.6),(4,.8),(3,1),(1,1.1),(0.00,1.00)],orientation=[(0,0,1,.6),(0,0,1,0),(0,0,1,-.6)],scale=[(.6,.6),(2.2,2.2),(.6,.6)],spine=[(-19.5,.1,23.4),(-6.5,.6,0),(-19.5,.1,-23.4)]))]),
      Transform(DEF='WingEdges',scale=(0.16,0.16,0.16),
        children=[
        Shape(
          appearance=Appearance(DEF='MainWEdge',
            material=Material(diffuseColor=(1,0.8,0),specularColor=(1,0.8,0))),
          geometry=Extrusion(DEF='WingEdge',ccw=False,creaseAngle=3.14,crossSection=[(0.00,1.00),(-5.2,0.00),(4,-.5),(4.6,-.4),(4.8,-.2),(4.9,.1),(4.9,.3),(4.5,.6),(4,.8),(3,1),(1,1.1),(0.00,1.00)],orientation=[(0,0,1,.6),(0,0,1,0),(0,0,1,-.6)],scale=[(.58,.58),(0.5,0.5),(.58,.58)],spine=[(-19.8,.095,24),(-6.5,.6,0),(-19.8,.095,-24)]))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HorizontalTailplanes.py")
