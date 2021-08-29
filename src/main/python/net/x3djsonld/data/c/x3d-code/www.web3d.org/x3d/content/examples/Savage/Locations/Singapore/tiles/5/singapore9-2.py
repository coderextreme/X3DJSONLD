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
        texture=ImageTexture(url=['../../images/5/singapore9-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.2908486746019459,103.61856206825804,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[1,3,6,7,8,9,8,8,7,7,8,8,9,9,10,11,11,11,11,10,9,8,8,8,8,8,7,7,7,7,8,9,7,6,6,6,3,5,6,7,8,9,8,8,8,8,9,9,9,10,10,11,11,11,10,10,9,8,8,8,8,8,7,7,7,8,8,9,8,7,6,6,5,5,6,7,8,8,9,9,9,9,10,10,10,10,10,10,10,9,9,9,9,8,8,8,8,8,7,7,7,8,9,9,8,8,7,7,6,6,7,7,8,8,9,9,9,9,10,10,10,10,10,10,9,9,9,9,9,8,8,8,8,8,7,7,7,8,9,9,9,8,8,7,6,8,9,8,8,8,9,8,8,9,9,9,9,10,11,10,9,9,9,9,8,8,7,7,8,8,7,7,7,8,8,8,9,9,9,8,7,8,10,10,10,10,10,9,7,8,9,9,9,10,12,11,10,9,9,8,8,8,7,7,8,8,7,7,7,8,8,8,8,9,9,8,7,9,10,12,13,13,12,10,7,8,10,10,10,11,13,12,10,9,8,7,7,7,8,8,8,8,7,7,8,8,8,8,8,8,8,8,8,9,11,14,17,17,16,12,7,8,10,11,11,12,13,12,11,9,8,7,7,7,8,9,8,8,8,8,8,9,8,8,8,8,8,8,9,10,12,17,23,22,20,14,9,8,9,10,11,12,13,12,11,10,9,8,8,8,8,9,8,8,8,8,8,9,8,8,8,7,7,8,10,10,12,19,26,26,24,17,10,8,8,9,10,11,12,12,12,11,10,9,9,8,8,8,8,9,9,9,9,9,9,8,8,7,7,7,10,10,11,17,25,27,26,20,12,9,7,7,8,9,10,11,12,12,11,10,9,8,7,7,8,8,8,9,8,8,8,8,7,7,7,7,11,10,10,17,25,28,29,22,15,10,7,6,7,8,9,11,13,13,12,11,10,8,7,7,7,8,8,9,8,8,8,8,7,7,6,6,8,9,11,18,27,30,31,25,17,12,8,6,6,7,8,10,13,13,12,11,10,9,7,7,8,8,8,9,9,8,8,8,7,7,6,6,6,7,11,19,27,30,32,25,18,13,8,7,6,6,8,10,13,13,12,11,10,9,8,8,8,9,9,9,9,9,9,9,8,7,7,7,5,6,9,15,22,25,26,22,17,12,9,7,6,7,8,9,12,12,12,11,10,9,8,8,8,8,7,6,6,7,8,9,7,6,6,6,4,6,8,12,16,18,19,17,15,12,9,8,7,8,8,9,10,11,12,11,10,9,8,8,8,7,6,5,5,6,7,8,7,6,6,6,5,7,10,11,12,12,12,11,11,10,9,9,8,8,9,9,10,11,12,11,10,9,8,8,9,8,7,6,6,7,7,7,7,6,6,6,7,9,10,9,8,7,6,7,8,9,9,9,9,9,9,10,10,11,11,11,10,10,9,9,10,10,9,8,8,8,7,7,7,7,6,6,8,9,10,9,7,6,5,6,7,8,9,10,9,9,9,9,10,10,10,9,8,9,9,9,10,11,10,10,10,9,7,5,6,6,6,7,8,9,9,8,7,6,6,6,7,8,9,10,10,9,8,8,9,8,8,8,7,8,8,9,10,10,10,10,11,10,7,5,5,5,6,6,8,8,8,8,7,7,6,7,7,8,9,9,10,9,8,8,8,8,8,7,7,7,8,8,9,10,10,10,11,10,8,6,6,6,6,6,8,7,7,7,8,7,7,7,8,8,9,9,10,9,9,9,8,8,7,7,7,7,7,8,9,9,9,9,10,9,8,7,7,7,7,7],
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
