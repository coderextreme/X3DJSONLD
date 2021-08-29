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
        texture=ImageTexture(url=['../../images/5/singapore11-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.3083120993579338,103.71910330716118,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[10,12,13,13,13,12,10,7,6,6,7,7,6,4,4,5,5,4,4,4,5,6,7,6,7,9,11,12,12,10,8,7,6,7,8,8,9,10,13,14,15,14,14,11,8,7,7,8,8,7,6,5,5,5,4,3,3,4,6,7,7,7,9,11,11,11,9,8,7,7,7,8,8,9,9,11,12,13,13,13,12,10,8,8,8,10,9,8,7,7,6,5,2,1,1,4,7,7,8,9,10,10,11,9,9,8,7,7,7,7,8,9,9,10,10,11,12,11,10,8,8,8,11,11,10,10,9,7,5,2,0,0,4,7,8,9,9,9,9,9,10,9,8,8,7,7,7,7,8,8,8,9,10,10,10,9,8,7,8,9,10,10,10,9,7,5,3,2,3,5,8,9,10,10,9,8,8,9,9,9,9,7,7,7,7,8,8,9,11,11,10,9,8,7,7,8,9,10,10,10,9,8,6,4,5,6,7,9,10,10,10,9,8,7,9,10,10,10,8,7,7,8,11,12,14,16,14,12,9,7,7,8,9,10,10,10,10,9,9,7,7,7,7,9,10,10,9,8,6,8,9,10,11,11,11,9,8,9,10,14,16,21,23,21,18,13,8,8,9,10,11,10,9,9,10,10,9,8,8,8,9,10,10,8,6,5,8,11,12,13,12,12,10,9,11,12,16,20,27,32,33,31,22,11,9,10,11,10,10,9,8,10,10,9,8,7,6,7,8,9,8,6,6,10,13,14,14,14,13,12,11,12,13,17,23,31,40,45,44,32,16,11,12,12,10,9,8,8,10,10,9,8,5,4,5,7,8,8,8,8,12,14,15,14,14,13,12,12,12,12,16,23,33,43,50,52,39,21,14,14,13,11,9,7,8,10,10,10,8,6,5,5,6,8,9,10,10,12,12,12,12,12,12,11,10,10,11,14,21,31,42,50,53,41,24,17,16,15,13,10,8,7,10,11,10,9,8,7,6,6,9,10,11,12,11,10,9,9,10,11,9,8,9,10,11,17,24,31,38,41,33,20,17,17,16,14,11,9,8,10,10,9,8,7,6,6,6,9,11,12,13,11,9,9,8,9,10,9,8,10,11,10,12,15,18,23,26,22,15,14,16,16,14,11,9,9,10,9,7,6,5,4,5,6,8,10,12,13,11,10,9,9,10,10,9,9,10,11,10,11,11,12,14,16,15,12,12,13,14,12,11,9,9,9,8,6,5,4,5,7,8,9,10,11,11,10,9,9,9,9,9,9,9,11,11,11,11,11,10,9,9,10,9,9,10,10,10,10,9,8,7,7,6,5,5,6,9,11,10,9,9,9,9,9,8,8,8,8,9,10,11,11,11,11,10,8,7,6,7,8,8,7,8,10,10,9,7,6,6,5,5,5,6,10,11,10,9,9,9,10,9,8,7,7,6,7,8,9,10,10,9,9,8,6,5,5,7,7,6,7,9,9,8,7,6,5,5,5,5,6,9,10,9,8,9,10,11,12,9,7,6,5,5,6,8,9,10,9,9,9,6,5,5,7,7,6,6,8,8,6,5,3,3,3,4,5,6,8,8,7,7,9,11,14,15,10,7,6,5,5,5,7,8,10,10,10,9,7,5,5,8,8,6,6,7,6,4,3,1,1,2,4,5,6,6,6,5,6,8,11,16,18,12,8,7,6,5,5,6,8,9,11,12,11,9,6,6,8,7,6,6,6,6,5,5,4,4,4,5,6,6,6,6,5,6,7,9,14,17,14,11,10,9,8,7,8,9,10,13,14,15,12,9,7,7,7,7,7,7,8,9,9,8,8,6,6,6,6,7,7,6,5,5,7,10,13,15,17,15,14,11,10,11,12,10,12,14,15,12,10,8,8,8,8,8,8,8,10,11,10,10,8,6,5,5,7,7,6,6,5,5,8,11,14,17,15,14,12,10,11,12],
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
