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
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/4/Malacca7-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-0.6602065014657854,102.91900048008048,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[7,10,2,3,6,9,5,2,5,2,1,0,0,0,1,1,2,2,3,4,4,2,9,9,11,11,9,9,4,8,3,9,-1,0,0,0,0,1,2,1,2,2,3,1,4,9,7,6,6,9,8,4,8,4,8,1,1,0,0,0,2,1,3,4,2,2,8,7,8,13,11,11,5,9,6,8,3,0,0,0,1,0,1,2,2,1,2,2,6,8,10,6,9,6,10,9,6,3,6,10,2,5,0,0,4,1,2,2,1,1,13,9,5,8,6,12,6,6,8,7,4,13,6,6,20,0,1,1,3,2,0,0,22,15,4,5,4,8,10,4,6,2,8,9,8,-5,1,0,1,2,2,2,2,2,28,25,4,3,8,4,6,5,5,6,4,4,10,11,8,9,6,9,2,1,2,1,16,18,9,13,5,8,5,1,5,13,10,13,10,8,3,9,9,8,0,1,1,1,28,21,13,9,9,4,8,4,3,-1,9,6,8,4,5,13,0,3,2,1,2,1,22,29,25,12,16,6,9,7,6,6,3,6,10,13,2,2,4,3,2,2,3,2,28,24,16,6,18,10,6,8,6,9,11,9,15,2,1,3,2,2,2,2,2,2,17,15,23,22,6,8,4,6,11,4,7,8,14,8,2,2,2,2,0,1,2,2,29,25,20,24,17,16,14,7,4,6,3,8,6,13,2,-4,0,2,3,1,1,1,27,29,27,22,13,22,19,17,5,5,6,10,9,5,10,6,5,3,7,4,3,2,22,32,27,21,20,18,22,11,10,4,6,4,4,8,6,5,6,4,3,4,4,3,22,22,11,9,5,12,9,20,7,18,13,5,7,3,2,16,8,6,1,3,3,4,26,9,14,8,7,6,14,5,10,8,7,8,8,4,2,10,4,4,2,2,2,2,10,9,10,6,8,19,19,6,8,6,5,2,8,4,6,7,7,2,1,3,2,1,11,9,9,8,4,8,6,5,6,6,6,7,5,6,6,6,3,0,0,2,3,3,11,0,15,9,9,11,10,9,8,11,7,4,10,8,0,4,13,1,2,0,0,0,7,-2,17,9,9,10,10,9,8,8,7,4,8,11,0,3,13,1,0,0,0,0],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])))])
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
