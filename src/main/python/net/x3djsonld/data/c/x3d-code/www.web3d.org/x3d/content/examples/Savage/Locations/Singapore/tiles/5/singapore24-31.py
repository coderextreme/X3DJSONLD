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
        texture=ImageTexture(url=['../../images/5/singapore24-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4218243602718554,104.0350900579996,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[12,12,12,12,12,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,10,9,9,9,10,10,10,10,10,10,10,10,10,10,10,12,12,12,12,12,12,12,11,11,11,11,11,11,11,11,11,11,11,11,11,11,10,8,7,9,9,10,10,10,10,10,10,10,10,10,10,12,12,12,12,12,12,12,11,11,11,11,11,11,11,11,11,11,11,11,11,11,9,6,6,8,9,9,9,10,10,10,10,10,10,10,10,12,12,12,12,12,12,12,12,12,11,11,11,11,11,11,11,11,11,11,11,11,7,3,2,4,6,8,9,10,10,10,10,10,10,10,10,12,12,12,12,12,12,12,12,12,11,11,11,11,11,11,11,11,11,11,11,11,6,1,0,1,3,6,9,9,9,10,10,10,10,10,10,12,12,12,12,12,12,12,12,12,12,12,11,11,11,11,11,11,11,11,11,11,6,1,0,0,1,3,6,8,9,10,10,10,10,10,10,12,12,12,12,12,12,12,12,12,12,12,11,11,11,11,11,11,11,11,11,11,6,1,-1,-2,0,1,3,6,9,9,9,10,10,10,10,9,11,12,12,12,12,12,12,12,12,12,12,12,11,11,11,11,11,11,11,11,6,1,-1,-2,-1,0,1,3,6,8,9,10,10,10,10,7,10,12,12,12,12,12,12,12,12,12,12,12,12,11,11,11,11,11,11,11,6,1,-1,-2,-2,-2,0,1,3,6,9,9,9,10,10,5,7,9,11,12,12,12,12,12,12,12,12,12,12,12,11,11,11,11,11,11,6,1,-1,-2,-2,-2,-1,0,1,3,6,8,9,10,10,4,5,7,10,12,12,12,12,12,12,12,12,12,12,12,12,11,11,11,11,11,6,1,-1,-2,-2,-2,-2,-2,0,1,3,6,9,9,9,4,4,5,7,9,11,12,12,12,12,12,12,12,12,12,12,11,11,11,11,11,6,1,-1,-2,-2,-2,-2,-2,-1,0,1,3,6,8,9,4,4,4,5,7,10,12,12,12,12,12,12,12,12,12,12,12,12,11,10,10,6,1,-1,-2,-2,-2,-2,-2,-2,-2,0,1,3,6,9,4,4,4,4,5,7,10,11,12,12,12,12,12,12,12,12,12,12,11,10,9,5,1,-1,-1,-2,-2,-2,-2,-2,-2,-1,0,1,3,6,4,4,4,4,4,5,7,10,12,12,12,12,12,12,12,12,12,12,12,9,7,3,0,0,-1,-1,-2,-2,-2,-2,-2,-2,-2,0,1,3,4,4,4,4,4,4,5,8,10,11,12,12,12,12,12,12,12,12,12,8,4,1,0,0,0,-1,-1,-2,-2,-2,-2,-2,-2,-1,0,1,4,4,4,4,4,4,4,5,7,10,12,12,12,12,12,12,12,12,12,7,1,0,0,0,0,-1,-1,-1,-2,-2,-2,-2,-2,-2,-2,0,4,4,4,4,4,4,4,4,5,8,10,11,12,12,12,12,12,12,12,7,1,0,0,0,0,0,0,-1,-1,-2,-2,-2,-2,-2,-2,-1,4,4,4,4,4,4,4,4,4,5,7,9,12,12,12,12,12,12,12,7,1,0,0,-1,0,0,0,-1,-1,-1,-2,-2,-2,-2,-2,-2,4,4,4,4,4,4,4,4,4,4,5,8,10,11,12,12,12,12,12,7,1,0,0,0,0,0,0,0,0,-1,-1,-2,-2,-2,-2,-2,4,4,4,4,4,4,4,4,4,4,4,5,7,9,12,12,12,12,11,7,1,0,0,0,0,-1,0,0,0,-1,-1,-1,-2,-2,-2,-2,5,5,4,4,4,4,4,4,4,4,4,4,5,7,10,11,12,12,11,7,2,0,0,0,0,0,0,0,0,0,0,-1,-1,-2,-2,-2],
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
