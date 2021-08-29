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
        texture=ImageTexture(url=['../../images/5/singapore20-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.3868975107598795,103.64728813651608,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[10,11,12,11,11,11,10,10,9,9,9,9,8,7,6,5,5,5,5,5,6,6,7,7,8,9,9,9,10,10,11,11,12,13,15,15,12,12,12,12,11,10,10,9,9,9,9,8,8,7,6,5,5,5,5,6,6,7,7,8,9,9,9,10,10,10,11,11,11,13,14,14,14,13,12,12,11,10,9,9,9,9,8,8,7,6,6,5,5,5,6,6,7,7,8,9,9,9,10,10,10,10,11,11,12,12,13,14,14,13,12,11,10,9,8,8,8,8,8,8,7,6,6,5,5,6,6,7,7,8,9,9,9,10,10,10,10,11,11,11,11,11,12,13,14,13,11,10,9,8,8,8,8,8,8,8,7,6,6,6,6,6,7,7,8,9,9,9,10,10,10,10,11,11,11,11,10,10,10,12,13,12,10,9,8,8,8,7,7,7,7,7,7,6,6,6,6,7,7,8,9,9,9,10,10,10,10,11,11,11,11,10,10,10,10,12,11,10,9,8,7,8,7,7,7,7,7,7,7,7,7,7,7,7,8,9,9,9,10,10,10,10,11,11,11,10,10,9,9,9,10,12,9,8,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,8,9,9,9,10,10,10,10,11,11,11,11,10,9,9,8,9,10,10,8,7,6,7,7,7,7,7,7,7,7,7,7,7,7,8,8,9,9,9,10,10,10,10,11,11,11,10,10,9,9,8,7,7,7,8,8,7,7,7,7,7,7,7,7,7,7,7,7,7,7,8,9,9,9,10,10,10,10,11,11,11,11,10,9,8,7,6,6,5,5,5,10,10,9,8,8,8,8,8,8,8,8,8,8,8,8,9,9,9,10,10,10,10,11,11,11,10,10,9,8,6,5,4,4,4,4,4,11,11,10,8,8,8,8,8,8,8,8,8,8,9,9,9,9,9,10,10,10,11,11,11,11,10,9,8,7,5,4,3,2,2,2,2,10,8,8,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,10,10,11,11,11,10,10,9,8,6,5,3,3,2,2,2,2,2,9,8,8,10,10,10,10,10,9,9,9,9,9,9,9,9,9,9,10,10,11,11,11,10,9,9,7,5,3,2,2,2,2,2,2,2,11,11,11,11,11,11,10,10,9,9,9,9,9,9,9,9,9,9,10,11,11,10,10,10,9,8,6,4,3,2,2,2,2,2,2,1,13,13,13,12,12,12,11,10,9,9,9,9,9,9,9,9,9,10,10,11,11,10,10,10,9,8,6,4,2,2,2,2,2,2,2,1,14,16,15,14,13,12,10,9,9,9,9,9,9,9,9,9,10,11,11,10,10,10,10,10,10,9,9,6,5,4,3,2,2,2,2,2,15,17,17,15,13,11,10,9,9,9,9,9,9,9,9,10,10,12,11,10,9,9,10,10,11,11,10,9,7,6,5,4,3,3,2,3,13,15,16,14,12,10,9,9,9,9,9,9,9,9,10,11,12,11,10,8,8,9,10,10,11,11,11,10,9,8,8,9,8,7,6,5,11,14,14,13,11,9,9,9,9,9,9,9,9,10,11,12,11,10,9,7,7,9,10,10,10,11,11,11,11,10,10,12,13,11,9,7,11,14,13,11,10,10,10,10,10,10,10,10,10,11,11,11,10,8,8,7,7,9,10,10,10,10,11,11,11,11,11,12,13,12,11,10,12,13,12,10,10,10,11,11,11,11,11,11,11,12,11,10,9,7,7,7,7,9,10,10,10,10,10,11,11,11,11,12,12,13,13,11,12,14,14,12,12,12,12,12,12,11,11,12,11,11,10,8,8,7,7,7,7,9,10,10,10,10,10,10,11,11,11,11,12,12,13,12],
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
