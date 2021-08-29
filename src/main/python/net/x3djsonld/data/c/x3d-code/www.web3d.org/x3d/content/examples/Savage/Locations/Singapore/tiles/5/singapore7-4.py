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
        texture=ImageTexture(url=['../../images/5/singapore7-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.273385249845958,103.64728813651608,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[4,1,0,0,0,-1,0,0,1,3,2,0,-2,-4,-4,-3,-1,0,0,1,1,2,2,2,4,8,10,10,9,7,5,4,4,5,5,6,4,2,2,2,1,0,0,1,3,5,3,1,0,-3,-3,-1,0,0,1,1,1,1,2,3,6,11,14,15,14,11,8,6,5,4,5,5,4,3,4,6,5,3,3,4,5,5,4,2,0,-1,-1,0,0,0,1,1,1,1,2,5,9,15,19,20,19,15,12,9,7,5,4,4,2,4,5,6,5,4,4,4,5,6,5,4,1,0,0,0,1,1,1,1,1,1,2,6,10,16,20,21,20,18,16,14,12,8,5,4,0,5,6,5,4,3,3,4,4,5,5,5,3,0,0,0,1,1,1,1,1,1,3,7,11,16,18,19,19,20,20,20,17,12,7,6,-1,3,5,4,3,3,3,3,4,5,5,5,4,2,1,1,1,1,1,1,1,1,3,7,12,15,17,18,19,19,19,18,16,10,6,6,-1,1,3,3,3,3,3,3,3,4,4,5,4,3,2,1,1,1,1,1,1,1,3,8,12,15,17,18,18,17,16,14,10,4,1,4,0,1,2,2,3,3,3,3,3,3,4,5,4,4,3,2,1,1,1,1,1,2,5,10,13,15,16,17,16,15,14,11,8,5,4,7,0,2,2,2,3,3,3,3,3,3,3,4,4,4,4,3,2,1,1,1,2,5,8,12,15,15,16,16,15,14,13,12,11,11,12,14,2,3,3,3,3,3,3,3,3,3,3,4,4,5,4,4,3,3,2,2,4,7,11,13,15,16,15,15,15,14,14,14,14,16,16,15,2,3,3,4,3,3,3,3,3,3,3,3,3,4,4,4,5,5,5,6,7,10,13,14,15,15,15,15,15,15,15,17,18,19,17,11,3,3,4,4,4,4,4,4,4,4,3,3,3,4,5,6,6,7,7,8,9,12,14,14,15,15,15,15,15,15,16,18,19,19,15,7,3,4,4,5,4,4,4,4,4,4,4,3,4,5,6,7,7,7,8,9,11,13,14,15,15,15,15,15,15,15,16,16,16,16,13,4,4,5,5,5,4,4,4,4,4,4,4,4,5,5,6,7,8,8,8,10,11,13,15,15,15,15,15,15,15,15,16,15,14,13,10,3,5,6,6,5,4,4,4,4,4,4,4,5,6,6,7,7,8,8,8,9,11,13,15,14,14,14,14,15,15,15,15,14,13,11,8,3,6,7,7,6,5,5,4,4,4,4,5,5,6,7,7,8,8,8,8,9,11,13,14,14,14,14,14,14,15,14,14,13,12,10,6,3,8,10,9,7,6,6,6,4,4,5,6,6,7,7,8,8,8,8,8,9,10,12,14,14,14,14,14,14,14,14,13,12,11,9,6,3,9,11,10,8,8,8,7,5,5,5,6,7,7,8,8,8,8,8,8,8,10,12,14,14,14,14,14,14,14,14,13,11,10,8,6,3,9,11,11,9,8,8,7,7,6,6,7,7,8,8,8,8,8,8,8,8,9,12,13,14,14,14,14,14,14,13,12,11,9,8,5,3,9,11,10,9,9,8,8,7,7,7,7,8,8,8,8,8,8,8,8,8,9,11,13,14,14,14,14,14,14,13,12,10,9,7,5,2,10,11,9,8,7,8,7,6,6,7,8,8,8,8,8,8,8,8,8,8,9,11,13,14,14,14,14,13,13,13,12,10,8,7,4,2,10,10,8,6,6,6,6,4,5,7,8,8,8,8,8,8,8,8,8,8,9,11,13,14,14,14,14,13,13,12,11,10,8,6,4,2],
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
