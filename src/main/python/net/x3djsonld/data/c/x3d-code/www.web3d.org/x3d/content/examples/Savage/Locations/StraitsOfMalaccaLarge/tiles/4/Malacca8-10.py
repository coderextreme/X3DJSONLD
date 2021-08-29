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
        texture=ImageTexture(url=['../../images/4/Malacca8-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.3471685463819594,102.91900048008048,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[7,-2,17,9,9,10,10,9,8,8,7,4,8,11,0,3,13,1,0,0,0,0,18,0,6,10,23,9,10,9,10,9,7,8,7,7,6,2,0,0,3,1,0,0,21,20,17,5,7,6,9,8,7,8,10,14,11,9,4,5,3,2,0,0,2,2,21,29,27,19,17,8,12,15,7,9,7,12,5,5,2,3,6,5,4,0,0,0,30,31,21,22,5,4,5,7,8,20,7,2,4,6,14,4,3,4,5,4,3,2,25,24,21,5,5,11,21,11,9,1,5,5,4,5,3,5,5,3,2,3,7,6,23,23,8,9,7,6,14,11,8,5,6,4,6,4,5,5,15,7,5,3,2,2,27,26,5,7,10,9,6,7,5,5,4,9,12,5,6,5,4,4,7,6,4,6,5,4,9,4,4,5,4,6,6,3,15,17,5,4,5,4,39,4,5,3,7,6,6,13,8,8,9,3,2,5,5,-2,24,21,11,14,4,5,2,5,0,4,3,1,11,17,22,9,8,6,0,2,4,11,30,6,49,4,4,6,4,5,35,4,9,16,25,14,8,8,16,13,3,3,3,6,9,11,3,5,3,5,11,25,7,186,4,5,13,-2,17,14,26,2,6,4,3,4,6,17,12,3,3,6,3,2,6,4,4,6,5,11,23,26,10,6,7,5,3,3,4,35,2,2,2,3,1,3,4,5,16,15,22,23,26,15,1,4,4,4,5,0,16,5,2,1,1,3,4,4,2,9,9,8,9,24,9,1,3,4,6,4,7,30,5,3,4,4,3,2,3,3,4,18,3,-19,10,4,2,2,3,5,6,4,5,35,3,2,2,2,2,1,5,3,7,4,5,12,2,0,0,3,2,3,4,5,4,5,3,3,1,1,2,2,0,2,1,5,8,4,1,0,1,2,5,3,3,4,4,4,5,1,3,2,0,0,4,3,13,10,7,7,1,0,1,2,2,2,1,1,5,4,4,2,5,3,7,8,9,4,6,14,4,2,1,2,3,1,1,4,1,1,3,6,6,9,9,4,4,6,7,5,25,10,8,10,2,1,1,3,2,3,2,3,3,5,4,12,7,3,2,7,10,5,28,8,9,9],
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
