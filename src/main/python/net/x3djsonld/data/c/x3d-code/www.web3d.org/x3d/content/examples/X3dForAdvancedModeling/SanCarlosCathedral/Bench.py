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

newModel=X3D(profile='Interchange',version='3.3',
  head=head(
    children=[
    meta(content='Bench.x3d',name='title'),
    meta(content='Bench for San Carlos Cathedral',name='description'),
    meta(content='Michele Foti',name='creator'),
    meta(content='8 March 2012',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='TODO.html',name='reference'),
    meta(content='http://www.sancarloscathedral.net',name='reference'),
    meta(content='RoyalPresidioChapelHistoricalReferences.pdf',name='reference'),
    meta(content='CulturalHeritageProjectSanCarlosCathedral.pdf',name='reference'),
    meta(content='originals/',name='reference'),
    meta(content='originals/ModelSanCarlosChurchFeb-3-2012.x3d',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/SanCarlosCathedral/Bench.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Bench.x3d'),
    Background(skyColor=[(1,1,1)]),
    Transform(DEF='piano',translation=(0,-0.03,0),
      children=[
      Shape(
        geometry=Box(size=(2.35,0.03,0.383)),
        appearance=Appearance(
          material=Material(DEF='Brown',ambientIntensity=0.251748,diffuseColor=(0.502714,0.295535,0.191551),shininess=0.4,specularColor=(0.5,0.3,0.2))))]),
    Transform(DEF='piano2',translation=(0,-0.08,0),
      children=[
      Shape(
        geometry=Box(size=(2.32,0.07,0.353)),
        appearance=Appearance(
          material=Material(USE='Brown')))]),
    Transform(DEF='gambe1f',translation=(-1.149,-0.1055,0.16),
      children=[
      Shape(
        geometry=Box(size=(0.052,0.629,0.06)),
        appearance=Appearance(
          material=Material(USE='Brown')))]),
    Transform(DEF='gambe2f',translation=(1.149,-0.1055,0.16),
      children=[
      Shape(
        geometry=Box(size=(0.052,0.629,0.06)),
        appearance=Appearance(
          material=Material(USE='Brown')))]),
    Transform(DEF='gambe1r',translation=(1.149,-0.1875,-0.16),
      children=[
      Shape(
        geometry=Box(size=(0.052,0.445,0.06)),
        appearance=Appearance(
          material=Material(USE='Brown')))]),
    Transform(DEF='gambe2r',translation=(-1.149,-0.1875,-0.16),
      children=[
      Shape(
        geometry=Box(size=(0.052,0.445,0.06)),
        appearance=Appearance(
          material=Material(USE='Brown')))]),
    Transform(DEF='gambe2rAlto',rotation=(1,0,0,-0.07),scale=(1,0.914,1),translation=(1.123,0.03,-0.19),
      children=[
      Shape(
        geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,-1,0,1,5,4,-1,2,3,7,6,-1,4,5,6,7,-1,0,3,7,4,-1,1,2,6,5,-1],creaseAngle=0.1745,solid=False,
          coord=Coordinate(point=[(0,0,0),(0.052,0,0),(0.052,0,0.06),(0,0,0.06),(0,0.44,0.01),(0.052,0.44,0.01),(0.052,0.44,0.05),(0,0.44,0.05)])),
        appearance=Appearance(
          material=Material(USE='Brown')))]),
    Transform(DEF='top',rotation=(1,0,0,-0.07),translation=(1.149,0.432,-0.188),
      children=[
      Transform(rotation=(0,0,1,1.57105),scale=(1.5,1,0.77),
        children=[
        Shape(
          geometry=Cylinder(height=0.052,radius=0.026),
          appearance=Appearance(
            material=Material(USE='Brown')))])]),
    Transform(DEF='gambe2rAltoOpp',rotation=(1,0,0,-0.07),scale=(1,0.914,1),translation=(-1.175,0.03,-0.19),
      children=[
      Shape(
        geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,-1,0,1,5,4,-1,2,3,7,6,-1,4,5,6,7,-1,0,3,7,4,-1,1,2,6,5,-1],creaseAngle=0.1745,solid=False,
          coord=Coordinate(point=[(0,0,0),(0.052,0,0),(0.052,0,0.06),(0,0,0.06),(0,0.44,0.01),(0.052,0.44,0.01),(0.052,0.44,0.05),(0,0.44,0.05)])),
        appearance=Appearance(
          material=Material(USE='Brown')))]),
    Transform(DEF='topOpp',rotation=(1,0,0,-0.07),translation=(-1.149,0.432,-0.188),
      children=[
      Transform(rotation=(0,0,1,1.57105),scale=(1.5,1,0.77),
        children=[
        Shape(
          geometry=Cylinder(height=0.052,radius=0.026),
          appearance=Appearance(
            material=Material(USE='Brown')))])]),
    Transform(DEF='Schienale1',rotation=(1,0,0,-0.07),scale=(1,0.6,0.9),translation=(1.123,0.065,-0.19),
      children=[
      Shape(
        geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,-1,0,1,5,4,-1,2,3,7,6,-1,4,5,6,7,-1,0,3,7,4,-1,1,2,6,5,-1],creaseAngle=0.1745,solid=False,
          coord=Coordinate(DEF='CoordinatePoints',point=[(0,0,0),(-2.29,0,0),(-2.29,0,0.06),(0,0,0.06),(0,0.44,0.01),(-2.29,0.44,0.01),(-2.29,0.44,0.05),(0,0.44,0.05)])),
        appearance=Appearance(
          material=Material(USE='Brown')))]),
    Transform(DEF='Schienale2',rotation=(1,0,0,-0.07),scale=(1,0.15,0.48),translation=(1.123,0.335,-0.195),
      children=[
      Shape(
        geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,-1,0,1,5,4,-1,2,3,7,6,-1,4,5,6,7,-1,0,3,7,4,-1,1,2,6,5,-1],creaseAngle=0.1745,solid=False,
          coord=Coordinate(USE='CoordinatePoints')),
        appearance=Appearance(
          material=Material(USE='Brown')))]),
    Transform(DEF='Schienale3',rotation=(1,0,0,-0.07),scale=(1,0.15,0.28),translation=(1.123,0.3,-0.18),
      children=[
      Shape(
        geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,-1,0,1,5,4,-1,2,3,7,6,-1,4,5,6,7,-1,0,3,7,4,-1,1,2,6,5,-1],creaseAngle=0.1745,solid=False,
          coord=Coordinate(USE='CoordinatePoints')),
        appearance=Appearance(
          material=Material(USE='Brown')))]),
    Transform(DEF='braccioli1',translation=(1.149,0.19,0.036),
      children=[
      Shape(
        geometry=Box(size=(0.052,0.04,0.37)),
        appearance=Appearance(
          material=Material(USE='Brown')))]),
    Transform(DEF='braccioli2',rotation=(0,0,1,1.57105),scale=(1.06,1,1.2),translation=(1.149,0.1825,0.224),
      children=[
      Shape(
        geometry=Cylinder(height=0.052,radius=0.026),
        appearance=Appearance(
          material=Material(USE='Brown')))]),
    Transform(DEF='braccioli1Opp',translation=(-1.149,0.19,0.036),
      children=[
      Shape(
        geometry=Box(size=(0.052,0.04,0.37)),
        appearance=Appearance(
          material=Material(USE='Brown')))]),
    Transform(DEF='braccioli2Opp',rotation=(0,0,1,1.57105),scale=(1.06,1,1.2),translation=(-1.149,0.1825,0.224),
      children=[
      Shape(
        geometry=Cylinder(height=0.052,radius=0.026),
        appearance=Appearance(
          material=Material(USE='Brown')))]),
    Transform(DEF='base1',translation=(-1.149,-0.4125,-0.17),
      children=[
      Shape(
        geometry=Box(size=(0.06,0.045,0.06)),
        appearance=Appearance(
          material=Material(USE='Brown')))]),
    Transform(DEF='base2',translation=(-1.149,-0.4125,0.17),
      children=[
      Shape(
        geometry=Box(size=(0.06,0.045,0.06)),
        appearance=Appearance(
          material=Material(USE='Brown')))]),
    Transform(DEF='base3Lungo',translation=(-1.149,-0.4075,0),
      children=[
      Shape(
        geometry=Box(size=(0.06,0.035,0.3)),
        appearance=Appearance(
          material=Material(USE='Brown')))]),
    Transform(DEF='base12',translation=(1.149,-0.4125,-0.17),
      children=[
      Shape(
        geometry=Box(size=(0.06,0.045,0.06)),
        appearance=Appearance(
          material=Material(USE='Brown')))]),
    Transform(DEF='base22',translation=(1.149,-0.4125,0.17),
      children=[
      Shape(
        geometry=Box(size=(0.06,0.045,0.06)),
        appearance=Appearance(
          material=Material(USE='Brown')))]),
    Transform(DEF='base3Lungo2',translation=(1.149,-0.4075,0),
      children=[
      Shape(
        geometry=Box(size=(0.06,0.035,0.3)),
        appearance=Appearance(
          material=Material(USE='Brown')))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Bench.py")
