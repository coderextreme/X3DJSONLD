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
        texture=ImageTexture(url=['../../images/5/newport12-23.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.53493880443013,-71.24923386681724,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[65,67,65,60,56,54,52,51,51,50,49,48,47,47,46,45,44,43,42,41,41,40,38,68,70,69,64,59,56,53,52,52,51,50,50,49,48,47,46,45,44,43,42,41,40,39,68,69,68,63,59,57,56,54,53,52,51,50,50,49,48,47,46,45,44,43,42,41,39,65,65,64,61,59,59,59,57,54,53,52,52,51,50,49,48,47,45,44,43,42,41,39,62,62,61,60,60,59,58,56,55,54,54,53,52,51,50,49,48,45,44,43,42,40,39,61,62,61,62,61,59,56,53,53,54,55,54,53,52,50,49,48,47,45,44,42,41,40,61,62,63,64,62,60,57,53,52,54,56,56,54,53,51,50,49,47,46,44,42,41,40,61,61,62,63,62,60,59,57,54,55,55,55,55,53,52,50,49,48,46,44,43,41,40,60,60,59,61,61,59,59,59,58,56,56,55,54,54,53,51,50,48,46,45,43,41,40,59,59,59,59,60,61,60,60,59,57,56,56,55,55,53,52,50,49,47,45,43,41,40,61,61,61,61,61,61,61,61,62,62,60,59,57,56,54,52,51,49,47,45,43,42,40,62,63,64,64,62,61,61,62,62,61,60,60,59,56,54,53,51,49,48,46,44,42,41,63,63,63,63,65,64,64,64,62,61,59,58,57,56,54,53,51,50,48,46,44,42,40,66,62,62,62,64,65,64,63,62,61,59,57,56,55,54,53,51,49,47,45,44,42,40,69,65,63,64,65,66,64,64,63,61,59,57,56,54,53,52,50,49,47,44,43,41,39,68,66,65,67,67,64,62,63,63,62,59,57,55,54,52,51,50,48,47,44,42,40,39,68,67,65,66,65,64,62,61,61,61,58,56,55,53,52,50,49,47,45,44,42,40,38,66,67,65,65,64,64,64,62,62,60,57,55,54,53,51,50,48,46,45,43,41,40,38,68,67,65,63,62,62,62,60,60,58,56,54,53,52,51,49,48,46,45,43,41,40,39,69,65,64,62,61,61,60,60,57,56,55,53,52,51,50,49,48,46,44,43,41,39,38,67,64,63,61,60,59,59,59,56,54,54,53,51,50,50,49,47,46,44,42,40,39,38,65,63,61,60,58,57,57,57,54,52,52,51,50,49,49,48,46,45,43,42,40,39,38,62,62,61,59,57,56,56,56,53,51,51,51,50,49,48,47,46,45,43,42,40,39,38],
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
