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
        texture=ImageTexture(url=['../../images/5/singapore1-26.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.220994975577994,103.9632748873545,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[5,7,8,8,8,9,8,7,6,8,10,12,13,12,11,9,7,7,8,8,8,9,11,10,9,7,2,1,6,9,7,5,4,4,5,6,6,8,8,7,7,8,9,8,7,8,9,11,13,12,10,8,7,8,9,9,9,10,11,11,8,5,0,0,4,7,6,5,5,4,5,7,6,8,8,6,4,5,5,6,7,7,8,8,9,8,5,4,6,8,8,8,7,6,6,6,6,5,0,0,3,6,6,6,6,6,8,9,6,8,8,7,4,4,3,5,6,7,7,7,7,4,1,2,4,6,7,7,5,5,4,4,7,6,2,0,3,6,6,6,7,8,10,11,5,8,9,12,14,10,6,6,6,7,7,6,5,2,0,0,2,4,6,7,7,7,8,9,12,10,5,3,6,7,6,6,8,10,9,9,5,8,10,18,23,16,9,6,6,7,7,5,3,0,0,0,0,2,5,7,8,9,11,13,15,15,8,6,8,8,6,5,9,10,8,7,9,9,10,20,28,21,12,7,5,6,7,5,2,0,0,0,0,2,5,6,6,8,11,12,12,11,8,6,7,8,8,8,7,7,6,4,12,10,10,22,32,24,14,8,4,5,7,5,2,0,0,0,0,2,4,5,5,7,10,10,9,8,7,7,7,8,10,10,7,5,3,2,10,10,10,15,19,15,10,6,4,5,7,6,5,4,4,1,0,1,2,4,6,7,9,9,10,9,8,8,10,12,11,10,8,6,3,1,9,10,10,9,8,7,5,4,4,6,8,8,7,7,7,4,1,0,1,3,6,8,8,9,10,10,8,8,13,14,11,9,9,7,3,0,11,11,11,11,10,6,2,3,4,6,9,8,7,6,6,4,4,3,3,5,8,8,7,8,8,8,7,8,12,13,11,9,10,9,6,3,13,12,11,11,11,5,0,1,4,7,9,9,7,5,4,5,5,5,5,6,9,9,8,7,6,6,7,8,11,12,10,9,10,12,8,7,12,11,10,9,8,3,0,3,7,8,8,8,7,5,2,2,2,3,5,7,9,10,11,9,6,5,7,8,8,8,9,9,7,6,7,8,11,10,9,6,3,1,1,5,10,9,7,7,9,5,0,0,0,1,4,7,8,10,12,12,6,4,7,7,5,5,8,9,4,1,6,9,9,9,9,6,2,2,2,5,8,10,11,13,14,9,1,0,0,2,5,8,9,11,12,11,7,6,8,7,4,3,6,7,7,6,6,6,8,9,9,5,2,2,3,4,5,10,16,19,20,12,3,0,1,3,6,9,11,11,11,10,8,8,8,7,4,2,4,6,9,10,6,3,9,8,8,5,3,3,4,5,6,10,15,15,16,10,3,2,4,6,8,9,10,10,10,9,7,6,7,7,7,6,6,7,9,9,5,3,9,8,6,5,5,5,5,6,8,10,12,11,9,6,4,4,6,8,9,9,9,9,9,8,5,5,7,9,10,10,9,8,7,6,4,4,8,6,5,5,5,6,7,7,6,8,9,9,8,8,7,7,8,8,7,7,7,7,8,7,5,5,7,8,10,10,9,7,6,6,6,6,6,5,4,5,6,8,9,7,4,5,7,9,10,10,10,10,8,7,6,5,5,6,7,7,5,4,6,7,8,9,7,6,6,6,7,8,7,5,4,5,5,6,6,4,3,5,8,8,7,7,7,6,4,3,4,5,7,7,5,4,3,2,3,4,6,7,7,7,7,8,9,10,9,6,3,4,5,3,1,1,2,5,9,8,5,3,2,0,0,0,1,5,9,9,4,1,0,0,0,1,4,7,8,9,9,10,12,12,8,6,4,4,4,2,1,1,2,5,9,7,4,3,2,1,0,0,2,5,10,9,4,1,0,0,0,1,4,6,8,10,10,11,12,12],
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
