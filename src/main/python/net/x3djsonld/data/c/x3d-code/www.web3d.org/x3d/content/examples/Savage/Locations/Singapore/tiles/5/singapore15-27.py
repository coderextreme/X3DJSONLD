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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0.6,0.6,0.6)),
        texture=ImageTexture(url=['../../images/5/singapore15-27.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.3432389488699097,103.97763792148352,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[5,7,7,4,1,1,2,4,6,6,6,6,7,7,7,6,4,4,4,4,6,7,8,7,7,7,8,7,7,6,7,7,8,8,7,6,7,6,8,9,5,2,0,0,2,5,6,7,7,7,8,8,6,4,4,4,4,5,6,7,7,7,7,8,8,7,7,7,7,8,8,7,6,6,6,8,10,6,3,1,1,3,5,6,7,7,7,8,8,6,4,4,4,5,5,5,5,6,7,7,8,8,8,7,7,7,8,9,8,6,7,6,7,8,6,4,3,3,4,6,7,7,7,8,8,7,6,5,5,6,6,6,4,3,4,7,8,9,8,8,8,7,7,9,9,9,8,8,8,7,7,6,5,5,5,5,6,7,7,7,8,7,7,6,6,6,8,8,8,7,4,4,7,8,8,9,8,8,8,8,9,9,9,9,9,10,8,7,6,6,6,6,6,6,7,7,8,9,7,6,6,6,7,8,10,12,11,8,6,6,7,7,8,9,9,8,8,8,8,9,10,9,9,7,6,6,6,7,8,7,7,7,7,8,9,7,6,6,6,7,8,10,12,11,8,5,4,4,6,8,9,11,9,9,8,8,8,9,9,6,5,4,5,6,8,10,9,9,8,6,7,8,8,7,7,7,7,8,9,10,9,7,4,1,0,4,8,11,13,11,10,9,8,7,7,8,5,5,4,5,6,9,11,11,10,8,6,8,10,10,9,9,8,9,10,9,8,7,7,4,0,0,5,9,13,15,13,11,9,8,7,6,8,7,6,6,6,7,8,10,10,10,8,6,9,13,13,13,12,11,12,13,11,9,8,8,6,2,2,7,11,14,16,14,12,10,8,6,5,6,8,7,6,7,7,8,9,9,10,8,7,10,14,15,14,13,13,14,15,14,11,9,9,8,5,6,10,13,16,17,15,12,10,9,6,4,5,6,6,5,7,7,7,7,8,8,8,8,10,13,13,13,14,14,15,16,16,14,12,10,9,9,11,15,17,19,19,16,13,11,9,6,4,4,5,5,5,7,8,8,7,7,8,8,8,9,11,12,12,14,15,17,18,18,17,15,12,11,11,14,18,20,22,21,18,15,11,8,6,4,3,6,5,5,7,9,9,8,8,7,7,7,7,8,10,11,14,18,19,20,20,20,17,13,11,11,13,18,22,25,26,23,19,12,7,5,5,5,6,5,5,8,11,10,9,9,7,6,5,5,6,8,10,14,18,19,18,18,19,17,13,11,11,13,18,22,27,29,26,21,13,7,6,5,6,6,6,6,9,12,12,12,10,7,5,3,3,4,7,11,13,15,14,11,11,13,13,11,10,11,13,16,21,27,30,26,21,15,10,9,8,9,7,7,7,9,11,12,12,10,7,4,3,3,4,7,10,12,13,12,9,9,11,12,11,11,11,13,15,19,25,29,26,22,15,11,10,9,10,8,8,8,8,8,9,9,9,7,5,3,3,6,7,8,11,14,14,12,12,14,15,15,15,13,14,15,18,22,24,25,22,15,10,9,9,7,10,10,10,8,7,7,7,7,7,4,1,3,7,7,7,10,13,15,15,15,15,16,16,16,14,14,15,16,19,21,22,21,15,10,9,9,6,9,10,10,9,8,7,6,6,5,1,-1,1,6,7,7,10,12,14,15,14,14,14,13,13,14,14,14,15,17,19,19,18,13,10,10,10,7,9,10,10,10,10,8,6,5,4,0,-3,0,3,6,8,9,11,13,14,14,13,12,10,10,13,14,14,15,16,17,16,15,12,10,11,11,8,9,10,10,11,11,9,7,4,2,0,-3,-2,1,4,7,8,9,10,11,12,11,11,9,10,13,14,15,14,14,13,14,14,13,11,11,10,10,9,10,11,11,11,9,6,4,2,0,-3,-2,0,3,7,8,8,8,9,10,9,9,9,10,12,14,15,15,13,12,13,14,13,12,11,10,10],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(1.3519706612479037,103.81964454606431,0),geoSystem=['GDC'])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
