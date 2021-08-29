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
        texture=ImageTexture(url=['../../images/5/singapore16-28.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.3519706612479037,103.99200095561254,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[10,11,9,6,5,4,5,8,8,6,6,5,6,6,8,10,10,9,9,11,11,9,8,9,10,11,11,10,9,8,6,4,3,5,7,10,10,10,9,7,5,4,6,9,7,5,5,4,5,6,9,12,12,11,11,12,10,8,8,9,10,11,10,10,9,8,6,5,4,6,7,11,9,9,9,8,7,5,7,9,6,4,4,4,4,6,9,12,13,13,12,11,9,8,8,8,9,9,9,9,8,8,7,6,6,6,7,11,9,8,9,9,8,7,8,8,5,4,4,5,5,5,8,11,12,12,11,9,8,8,8,9,9,8,8,7,7,7,7,8,8,7,7,9,9,8,9,10,9,9,8,6,5,4,5,5,5,4,6,9,10,11,11,8,7,7,8,9,9,7,6,6,6,7,8,9,9,7,7,8,10,10,12,13,11,9,8,6,6,7,6,6,5,4,5,7,9,12,11,8,6,7,7,8,8,7,6,5,5,7,9,9,10,8,7,7,12,12,14,16,12,8,7,6,7,8,7,5,5,5,5,6,9,12,11,8,6,6,7,7,8,7,6,5,5,7,9,10,10,8,7,7,14,13,14,16,11,6,6,6,7,8,7,5,5,5,5,6,8,11,11,8,7,7,7,8,8,7,6,5,6,8,9,10,10,9,8,8,16,15,14,14,10,5,6,6,7,8,7,5,5,5,5,6,8,11,10,10,9,8,8,9,9,8,7,6,7,8,9,9,9,9,9,9,15,13,13,13,10,8,8,7,8,8,8,7,6,6,6,6,7,9,9,9,9,9,9,9,10,9,8,8,8,7,8,8,8,8,9,10,15,12,12,11,11,11,10,9,9,9,9,9,8,8,7,6,6,7,8,8,9,9,9,9,10,10,10,9,8,7,7,7,8,7,8,9,18,16,13,11,11,11,9,8,8,9,9,9,9,8,8,7,6,6,6,8,8,9,9,10,10,9,9,9,9,8,7,8,8,7,6,7,21,21,15,11,10,10,9,8,8,8,9,9,9,8,8,7,7,6,6,7,8,9,10,10,9,9,9,9,9,9,8,9,9,7,5,5,22,22,16,10,10,11,9,8,8,8,8,8,8,9,8,7,7,6,6,7,8,9,9,9,8,8,8,9,9,9,9,9,10,8,6,6,19,20,16,11,12,13,11,8,7,7,7,7,8,10,9,8,7,5,5,6,6,7,7,7,7,7,8,9,10,10,10,10,10,9,8,9,15,16,18,19,17,15,11,7,7,7,7,6,8,10,10,7,6,5,5,5,6,6,6,6,6,7,8,9,10,10,10,11,11,10,9,10,10,10,20,29,22,14,10,7,7,7,7,6,7,10,9,6,5,5,5,6,6,7,6,5,5,6,7,9,10,10,10,12,12,10,8,9,8,8,18,27,21,13,10,7,7,7,7,6,7,10,8,4,4,4,5,6,7,8,7,6,5,7,7,9,10,9,9,11,12,9,8,9,10,9,13,17,14,10,9,7,7,7,7,7,7,8,6,3,3,5,6,6,8,10,9,8,7,7,8,9,9,7,6,8,9,8,7,8,13,11,11,10,8,7,8,8,8,7,6,6,6,7,6,3,4,5,6,7,8,10,10,9,9,8,8,8,8,6,4,6,7,6,6,8,15,13,10,7,5,3,6,8,8,8,6,4,4,5,5,5,6,6,6,6,7,8,9,9,9,8,8,8,8,5,4,4,5,5,5,9,17,15,10,5,4,2,4,7,7,7,6,4,4,4,5,6,7,7,7,6,6,7,8,9,9,8,8,8,8,6,5,5,5,5,5,9,18,15,9,3,3,3,4,6,6,7,7,6,5,5,5,7,7,7,7,7,7,7,7,9,10,9,8,8,9,8,8,7,6,6,6,8],
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
