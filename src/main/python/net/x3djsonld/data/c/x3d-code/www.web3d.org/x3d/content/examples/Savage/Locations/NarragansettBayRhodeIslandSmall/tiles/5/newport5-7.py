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
        texture=ImageTexture(url=['../../images/5/newport5-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.478442799987555,-71.37836759125742,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,0,0,0,0,0,0,1,3,8,12,14,13,14,15,11,5,1,0,0,0,0,0,0,0,0,0,0,0,0,1,3,9,13,14,13,15,16,12,8,5,1,0,0,0,0,0,0,0,0,1,0,0,1,4,12,15,17,17,17,17,15,13,10,4,0,-1,-1,0,0,0,0,1,1,1,1,1,4,14,18,20,19,19,18,18,17,15,11,3,0,0,0,0,0,0,1,1,1,1,5,11,16,20,22,21,20,20,20,19,18,14,10,7,7,5,0,0,0,1,1,1,8,11,15,18,21,22,22,22,22,23,22,20,18,16,14,13,12,0,0,0,1,3,9,13,14,17,19,21,22,23,24,24,25,24,23,21,19,19,19,18,0,0,0,1,4,11,15,16,19,20,21,23,24,26,26,26,26,25,24,23,23,23,23,0,0,0,1,4,12,16,17,20,21,23,24,25,27,27,27,27,27,27,25,25,26,27,0,0,0,1,4,12,16,18,20,21,24,25,26,27,27,27,28,28,28,27,28,28,29,0,0,0,1,3,9,14,17,19,20,22,24,26,27,27,27,28,29,30,29,29,29,29,0,0,0,1,1,4,12,15,18,19,20,23,25,26,27,27,29,30,31,30,29,29,29,0,0,0,1,0,3,9,13,15,16,18,21,24,25,26,27,28,30,31,30,30,30,30,0,0,0,1,1,4,10,13,15,16,18,21,23,25,25,26,28,29,30,31,31,30,30,0,0,0,1,3,7,10,13,15,16,18,20,23,23,24,26,27,29,30,31,31,31,30,0,0,0,1,3,8,10,13,16,17,17,20,22,23,24,25,26,28,29,30,30,30,30,0,0,0,0,4,9,11,14,16,17,18,19,21,22,23,24,25,26,27,28,28,28,28,0,0,0,1,6,10,12,14,15,17,18,19,21,22,23,24,25,25,25,26,27,27,27,0,0,0,4,9,11,13,14,16,17,18,20,21,22,23,24,24,25,25,26,26,26,26,0,0,2,7,11,13,14,15,16,18,20,21,22,23,24,25,25,25,26,26,26,26,26,0,0,4,9,13,14,16,17,18,20,21,22,23,24,25,25,25,25,26,26,26,26,27,0,0,5,11,14,16,18,19,20,22,23,23,24,25,26,25,25,25,25,26,26,26,26,0,0,5,12,15,17,18,20,21,23,24,24,25,26,26,25,24,25,25,26,26,26,26],
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
