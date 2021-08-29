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
        texture=ImageTexture(url=['../../images/5/singapore9-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.2908486746019459,103.7334663412902,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[14,14,14,14,14,14,15,15,15,15,16,15,12,10,7,5,5,5,5,6,7,8,10,10,10,10,10,10,9,9,8,8,7,6,6,6,16,16,16,16,16,16,16,16,16,15,15,13,10,8,5,5,5,5,5,5,6,7,8,10,10,10,10,10,10,9,9,8,8,7,6,6,17,17,17,17,17,17,17,17,16,15,13,10,8,6,5,5,5,5,5,5,5,6,7,8,10,10,10,10,10,10,9,9,8,8,7,6,17,17,17,17,17,17,16,16,15,13,11,9,6,5,5,5,5,5,5,5,5,5,6,7,8,10,10,10,10,10,10,9,9,8,8,7,17,17,17,17,17,17,16,15,13,11,8,7,6,5,5,5,5,5,5,5,5,5,5,6,7,8,9,10,10,10,10,10,9,9,8,8,17,17,17,17,16,16,15,13,10,8,7,6,5,5,5,5,5,5,5,5,5,5,5,5,6,7,8,10,10,10,10,10,10,9,9,8,17,17,17,17,16,14,13,10,8,7,6,5,5,5,5,5,5,5,5,5,5,5,5,5,5,6,7,8,9,10,10,10,9,9,9,9,17,17,16,16,15,13,10,8,7,6,5,5,6,6,6,5,5,5,5,5,5,5,5,5,5,5,6,7,9,10,10,10,9,9,9,9,17,17,16,14,13,10,8,7,6,5,5,6,6,6,6,5,5,5,5,5,5,5,5,5,5,5,6,6,8,9,10,10,9,9,9,9,16,16,15,13,10,8,7,6,5,5,6,6,7,6,6,6,6,5,5,5,5,5,5,5,5,5,6,6,7,8,9,10,9,9,9,9,16,14,13,10,8,7,6,5,5,6,6,7,7,7,6,6,6,5,5,5,5,5,5,5,5,5,6,6,7,8,9,10,10,9,8,8,15,13,10,8,6,6,5,5,6,6,7,8,8,7,7,6,6,6,6,5,5,5,5,5,5,5,6,6,7,8,9,10,10,10,9,8,13,10,8,6,5,5,5,6,6,7,8,8,8,7,7,6,6,6,6,6,5,5,5,5,5,5,6,6,7,8,9,10,11,11,10,9,10,8,6,5,5,5,6,6,7,8,8,8,8,8,7,7,6,6,6,6,6,6,6,5,5,5,6,6,7,8,9,11,11,11,11,10,8,6,5,5,5,5,6,7,8,8,8,8,8,8,8,7,6,6,6,6,6,6,6,6,5,5,5,5,7,8,10,11,12,12,11,10,5,5,4,4,5,6,6,7,8,8,9,9,9,8,8,7,7,7,7,6,6,6,7,7,6,6,5,5,7,9,10,11,12,12,11,9,4,3,3,4,5,6,7,7,8,8,9,9,9,8,8,7,7,7,7,7,7,7,7,7,7,8,6,5,6,7,8,9,10,11,9,8,2,2,3,5,6,7,7,7,8,8,9,9,9,8,8,7,7,7,7,8,8,8,7,7,8,9,7,5,6,6,6,7,8,8,7,6,0,2,4,5,6,6,7,7,7,8,10,10,10,9,7,7,7,7,8,8,9,9,9,9,9,9,6,5,6,6,5,5,6,6,6,6,0,2,5,5,5,6,7,7,7,9,10,11,10,9,7,7,7,8,8,8,9,10,11,11,10,8,6,6,6,7,5,4,5,5,6,6,-1,0,3,3,3,6,9,10,10,10,10,10,9,8,7,7,8,8,8,8,8,9,10,11,10,8,6,6,7,7,6,5,6,6,6,6,-3,0,0,1,2,6,10,12,12,11,10,8,7,7,8,8,9,9,8,7,7,8,9,11,9,8,6,6,7,7,6,6,7,8,7,7],
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
