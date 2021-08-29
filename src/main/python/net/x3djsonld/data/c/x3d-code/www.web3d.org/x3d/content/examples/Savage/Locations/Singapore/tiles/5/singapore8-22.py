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
        texture=ImageTexture(url=['../../images/5/singapore8-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.2821169622239519,103.90582275083842,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[6,6,6,7,8,9,9,10,10,10,10,9,9,9,9,8,8,8,9,12,17,22,27,30,30,27,21,15,9,4,3,3,3,3,2,2,5,6,7,8,8,9,10,10,10,10,9,9,9,9,8,8,8,9,12,17,22,26,29,29,26,21,14,9,5,3,3,3,2,2,2,2,6,7,8,9,9,9,10,10,10,9,9,9,9,8,8,8,9,12,17,22,27,30,30,27,21,15,9,4,3,3,3,2,2,2,2,2,9,10,11,10,10,10,10,10,9,9,9,9,8,8,8,9,12,17,22,26,29,29,26,21,14,9,5,3,3,3,2,2,2,2,2,2,12,13,14,12,10,10,10,9,9,9,9,8,8,8,9,12,16,22,27,30,30,27,21,15,9,4,3,3,3,2,2,2,2,2,2,1,15,17,16,14,11,10,9,9,9,9,8,8,8,9,12,17,22,26,29,29,26,21,15,9,5,3,3,3,2,2,2,2,2,2,1,0,18,19,18,15,12,10,9,9,9,9,8,8,8,11,17,22,27,30,30,27,21,15,9,4,3,3,3,2,2,2,2,2,2,1,0,0,19,18,16,14,11,10,9,9,9,10,10,10,11,15,21,26,29,29,26,21,15,9,5,3,3,3,2,2,2,2,2,2,1,0,0,0,19,16,13,11,9,9,10,10,11,11,12,12,13,18,26,29,30,27,21,14,8,4,3,3,3,2,2,2,2,2,2,1,0,0,0,0,17,14,11,10,9,9,10,11,11,12,12,11,12,15,20,23,22,20,14,9,5,3,3,3,2,2,2,2,2,2,1,0,0,0,0,0,13,11,9,9,10,10,11,12,12,12,12,11,9,9,12,13,12,10,7,4,3,3,3,3,2,2,2,2,2,1,0,0,0,0,0,0,11,10,9,9,10,11,11,12,12,11,10,8,7,6,8,8,8,7,5,3,3,4,4,4,4,3,2,2,1,0,0,0,0,0,0,-1,9,9,10,10,11,12,12,12,12,11,8,6,5,5,5,5,5,5,5,4,4,5,6,7,6,4,3,1,0,0,0,0,0,0,-1,-1,9,9,10,11,11,12,12,11,10,8,6,5,5,5,5,5,5,5,5,5,7,9,11,12,9,7,5,3,2,0,0,0,0,-1,-1,-1,10,10,11,12,12,12,12,10,8,6,5,5,5,5,5,5,5,5,5,7,10,14,17,18,14,11,8,6,3,2,0,0,-1,-1,-1,-1,10,11,11,12,12,11,10,8,6,5,5,5,5,5,5,5,5,5,7,10,14,17,18,17,13,10,8,7,5,3,1,0,0,-1,-1,-2,11,12,12,12,12,10,8,6,5,5,5,5,5,5,5,5,5,7,10,14,18,19,16,13,10,8,8,7,7,6,3,1,0,-1,-2,-2,11,12,12,11,10,8,6,5,5,5,5,5,5,5,5,6,7,10,14,16,18,17,13,10,8,8,8,8,8,7,5,3,2,0,0,0,12,12,12,10,8,6,5,5,5,5,5,5,5,5,5,7,10,13,18,18,16,13,10,8,8,8,8,8,8,7,7,6,6,5,4,4,12,11,10,8,6,5,5,5,5,5,5,5,5,6,7,10,14,16,18,17,13,10,8,8,8,8,8,8,8,8,8,8,8,9,8,9,12,10,8,6,5,5,5,5,5,5,5,5,5,7,10,14,18,18,16,13,10,9,8,8,8,8,8,8,8,8,8,8,10,12,13,14,10,8,6,5,5,5,5,5,5,5,5,6,7,10,14,16,18,17,13,10,9,8,8,8,8,8,8,8,8,8,9,10,12,14,15,16,8,7,5,5,5,5,5,5,5,5,5,7,10,14,17,18,16,13,10,9,8,8,8,8,8,8,8,8,8,8,10,12,14,15,17,17],
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
