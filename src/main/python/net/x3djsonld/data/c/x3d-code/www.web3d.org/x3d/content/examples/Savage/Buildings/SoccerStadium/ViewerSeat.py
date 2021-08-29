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
    meta(content='ViewerSeat.x3d',name='title'),
    meta(content='Viewer seat',name='description'),
    meta(content='LT Christos Kalogrias - Hellenic Navy',name='creator'),
    meta(content='15 August 2003',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Buildings/SoccerStadium/ViewerSeat.x3d',name='identifier'),
    meta(content='http://www.web3d.org/x3d/content/README.X3D-Edit.html',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(DEF='ViewerSeat',
      children=[
      Transform(translation=(-2.15,0,-0.3),
        children=[
        Transform(DEF='UpSeat',rotation=(1,0,0,-1.57),scale=(0.8,0.8,1.2),
          children=[
          Shape(
            appearance=Appearance(DEF='SeatYellow',
              material=Material(diffuseColor=(0.8,0.8,0.1),specularColor=(0,0.2,0.3))),
            geometry=Extrusion(convex=False,creaseAngle=2.5,crossSection=[(0.00,1.30),(.494,1.196),(.923,.923),(1.196,.494),(1.30,0.00),(1.196,-.494),(.923,-.923),(.494,-1.196),(0.00,-1.30)],scale=[(0.45,0.9),(0.1,0.8),(0.1,0.8),(0.45,0.9)],spine=[(1.7,-0.4,0),(2.5,-0.4,0),(3.0,-0.4,0),(3.7,-0.4,0)]))]),
        Transform(DEF='DownSeat',rotation=(0,0,1,3.14),scale=(0.8,0.8,1),translation=(4.3,-1.7,1.3),
          children=[
          Shape(
            appearance=Appearance(USE='SeatYellow'),
            geometry=Extrusion(DEF='seatLeft',convex=False,creaseAngle=2.5,crossSection=[(0.00,1.30),(.494,1.196),(.923,.923),(1.196,.494),(1.30,0.00),(1.196,-.494),(.923,-.923),(.494,-1.196),(0.00,-1.30)],scale=[(0.1,0.8),(0.4,0.8),(0.4,0.8),(0.1,0.8)],spine=[(1.7,-0.4,0),(2.5,-0.4,0),(3.0,-0.4,0),(3.7,-0.4,0)]))])]),
      Transform(DEF='BackSeat',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.5,0.5,0),specularColor=(0,0.2,0.3))),
          geometry=Box(size=(1.6,2.75,0.1)))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ViewerSeat.py")
