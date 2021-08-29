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
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/5/newport29-24.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.672143386647825,-71.24116300903972,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,3,4,4,3,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,3,4,5,6,6,5,4,2,1,1,1,1,1,1,1,1,1,1,1,1,1,2,3,4,6,7,8,8,7,6,3,2,1,1,1,1,1,1,1,1,1,1,1,1,2,4,6,7,9,10,10,8,7,5,3,2,1,1,1,1,1,1,1,1,1,1,2,4,6,8,9,11,13,13,10,8,6,4,3,3,1,1,1,1,1,1,1,2,4,5,7,9,11,12,13,15,15,13,10,6,5,5,4,1,1,1,1,1,2,3,4,6,8,10,12,14,15,16,18,18,16,12,7,4,4,3,1,1,1,1,1,2,4,5,7,9,11,13,15,17,19,20,20,18,12,8,4,1,1,1,1,2,2,2,3,4,6,7,10,12,15,18,20,21,22,22,19,13,7,3,1,1,2,2,2,2,2,3,4,6,9,12,16,18,21,23,24,25,23,20,14,8,4,2,1,3,3,2,2,3,4,5,7,11,15,19,22,25,26,27,28,25,21,16,9,5,3,2,5,4,3,2,4,5,7,10,13,20,23,26,29,30,30,30,26,22,18,11,6,4,3,6,5,3,3,5,6,8,12,15,22,25,28,31,31,32,31,27,23,18,11,7,4,3],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])))])
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
