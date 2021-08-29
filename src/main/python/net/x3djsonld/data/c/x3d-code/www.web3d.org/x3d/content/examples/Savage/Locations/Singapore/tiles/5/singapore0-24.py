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
        texture=ImageTexture(url=['../../images/5/singapore0-24.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.2122632632,103.93454881909646,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[7,8,9,10,9,8,7,6,5,5,6,8,7,6,4,3,4,6,7,7,8,10,11,10,8,7,7,7,8,7,6,5,4,3,4,6,7,7,8,8,8,7,6,6,6,7,10,12,11,8,6,5,5,6,6,7,8,12,14,12,10,7,6,7,8,8,7,5,4,2,1,5,7,8,7,7,6,6,5,5,6,7,10,12,12,9,7,6,6,5,6,7,8,12,13,12,10,8,7,9,10,10,8,6,3,2,2,6,8,8,7,6,6,6,5,5,6,8,10,12,11,9,8,8,6,4,5,6,8,10,11,10,9,9,10,10,11,11,9,6,3,3,3,7,7,8,7,7,6,6,5,5,6,9,11,13,12,10,10,9,8,4,4,6,7,7,7,9,9,8,8,8,8,7,6,5,4,5,6,8,6,8,9,8,7,6,5,5,6,9,12,14,13,11,11,11,10,5,4,5,5,4,4,7,9,8,7,5,3,1,1,3,5,8,9,11,4,7,9,9,8,7,5,5,6,9,11,12,11,10,11,13,11,6,4,5,5,4,6,8,9,8,8,6,4,1,0,2,5,8,11,11,2,5,8,10,9,7,7,6,6,7,8,9,9,8,11,14,13,8,5,5,5,6,8,10,10,9,9,10,9,5,2,3,4,8,11,10,3,4,7,8,8,7,6,6,6,6,6,6,6,7,10,14,14,10,8,7,7,9,10,11,11,9,8,9,8,5,3,4,5,7,9,10,4,4,4,5,6,7,6,6,6,6,5,3,4,6,9,12,13,12,11,10,10,11,11,11,10,8,6,6,6,4,3,5,7,6,7,9,5,5,5,5,6,7,6,6,6,6,5,3,3,6,8,10,10,10,10,10,10,11,11,10,9,7,5,5,5,4,4,6,7,6,6,8,8,8,7,7,8,7,7,6,6,6,5,4,4,6,7,8,7,7,7,9,10,10,10,9,8,6,5,4,4,5,6,7,7,7,7,6,7,8,7,7,7,7,6,5,5,5,6,6,7,7,7,8,8,7,7,8,8,8,8,9,8,8,6,4,4,6,7,6,6,7,7,5,5,6,7,7,6,5,5,4,3,3,6,10,10,8,8,10,10,9,8,7,7,6,7,9,10,10,9,6,4,6,7,5,4,6,6,3,4,4,5,6,5,5,5,4,3,3,6,11,11,8,8,11,11,10,9,7,5,5,5,8,10,10,10,6,4,6,7,5,3,5,6,3,4,4,4,5,5,6,6,6,5,5,6,9,9,7,7,9,9,8,7,5,4,5,6,7,8,10,10,6,3,7,9,5,2,5,7,5,4,4,4,4,5,7,8,7,7,7,7,8,7,7,7,9,8,7,5,3,4,6,6,6,6,9,9,6,4,7,10,6,3,5,7,6,7,6,5,5,6,8,9,9,8,8,8,9,8,8,9,11,10,7,4,3,3,6,7,7,7,7,7,5,5,8,10,6,4,4,4,6,8,7,6,6,7,8,9,9,9,7,8,8,8,8,9,11,9,7,4,4,4,7,8,7,6,5,4,5,6,7,8,7,6,4,3,6,8,7,7,7,7,8,8,8,7,7,7,7,6,5,5,6,6,6,6,6,7,9,8,6,4,3,3,4,4,4,5,7,9,7,7,6,9,6,6,6,7,8,8,8,8,7,7,6,5,3,3,3,4,7,8,9,9,10,9,6,3,2,2,4,5,4,4,7,10,9,8,6,7,4,2,2,5,8,10,10,11,11,9,6,4,3,3,4,6,9,10,10,10,12,11,7,4,4,5,7,9,8,7,7,7,7,7,4],
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
