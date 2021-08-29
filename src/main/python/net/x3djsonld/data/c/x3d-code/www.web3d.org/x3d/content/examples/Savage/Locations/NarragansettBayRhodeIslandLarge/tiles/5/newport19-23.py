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
        texture=ImageTexture(url=['../../images/5/newport19-23.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.573110194091946,-71.2855577038016,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[30,42,32,39,38,33,26,36,31,28,30,32,32,32,35,41,43,44,46,47,49,50,30,30,30,31,30,22,34,35,37,37,35,37,40,48,43,43,42,43,46,47,51,51,27,20,28,12,6,30,37,39,42,49,42,43,48,48,49,49,47,50,49,48,49,50,17,17,15,7,25,32,38,43,46,49,47,51,56,55,55,54,53,53,51,49,50,51,0,5,4,19,24,31,40,48,51,52,53,56,61,58,59,60,60,58,57,53,53,52,0,0,6,12,19,24,41,49,59,58,55,51,57,62,62,65,63,61,58,56,55,55,0,0,0,7,12,22,37,47,65,63,59,52,52,58,62,64,67,65,62,60,58,59,0,0,0,0,8,18,37,49,48,54,61,55,56,57,61,63,67,65,62,61,62,62,0,0,0,0,0,13,29,47,55,57,55,55,54,55,59,61,64,63,63,64,65,65,0,0,0,0,0,9,25,39,47,54,61,55,54,54,55,58,62,60,65,66,67,66,0,0,0,0,0,8,20,38,49,53,56,56,54,54,52,54,54,56,63,68,67,67,0,0,0,0,0,8,18,36,50,51,54,56,56,52,51,49,48,52,56,59,64,64,0,0,0,0,0,5,12,23,45,47,51,53,54,48,43,43,49,52,53,58,64,63,0,0,0,0,3,2,7,17,35,48,49,48,50,44,44,40,42,53,54,56,64,65,0,0,0,0,5,2,6,17,29,44,48,48,49,49,46,40,40,47,53,57,61,62,0,0,0,3,5,6,4,15,29,45,52,53,55,52,48,44,42,47,54,58,63,63,0,0,0,5,1,5,11,20,31,48,57,58,58,56,52,47,44,45,49,62,63,63,0,0,1,3,0,6,15,23,31,46,54,63,64,51,46,45,41,43,49,60,65,67,0,0,0,6,3,4,14,23,29,40,46,53,53,45,41,44,45,45,50,56,61,61,0,0,0,4,1,1,12,16,24,28,36,39,42,37,37,38,37,42,47,52,62,62,0,0,0,4,0,0,5,7,13,18,22,26,27,32,34,31,37,41,46,49,51,53,0,0,0,0,0,0,0,4,8,13,16,15,17,30,30,33,35,40,43,47,55,54,0,0,0,0,1,0,0,0,2,6,13,14,21,24,26,31,35,42,47,49,48,49,0,0,0,0,2,2,0,0,2,5,11,14,23,25,26,30,35,42,48,48,48,49],
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
