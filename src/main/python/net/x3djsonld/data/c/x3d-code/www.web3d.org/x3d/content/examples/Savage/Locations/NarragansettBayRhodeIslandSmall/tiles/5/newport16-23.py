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
        texture=ImageTexture(url=['../../images/5/newport16-23.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.56722223554018,-71.24923386681724,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[75,73,72,70,68,65,64,63,63,61,60,58,57,56,54,53,52,50,48,46,44,43,43,76,75,72,70,69,66,64,63,62,61,60,59,58,57,55,54,52,50,48,46,45,44,44,78,77,74,72,71,69,65,63,62,61,60,59,59,57,55,54,52,50,48,46,45,45,45,78,77,76,74,74,71,67,64,62,61,60,59,59,57,56,54,52,50,48,47,45,45,45,77,76,76,77,75,72,69,67,64,62,61,60,59,57,56,54,52,50,48,47,46,46,46,77,76,77,76,75,72,69,67,65,63,61,60,59,58,56,54,52,50,49,47,46,46,46,77,74,71,68,68,66,64,63,62,61,61,60,59,57,55,54,52,50,49,47,46,46,47,77,75,71,66,63,62,61,60,58,58,59,59,58,56,55,53,52,50,49,48,47,47,47,75,73,70,66,64,65,65,63,58,57,58,57,56,56,54,53,52,50,49,48,47,47,47,73,72,72,70,68,69,70,67,59,57,58,57,56,55,54,53,51,50,49,48,47,47,47,75,74,73,71,71,71,73,70,61,59,58,57,56,55,54,53,51,50,49,48,48,48,48,76,74,72,71,70,69,68,66,62,60,59,57,56,55,54,52,51,50,50,49,48,48,48,76,74,72,70,69,67,65,64,63,61,59,58,56,55,54,52,51,50,50,49,49,48,48,77,73,71,70,67,66,64,64,64,62,60,58,57,55,54,53,52,51,50,49,49,48,49,73,71,71,70,68,66,64,64,65,63,60,58,57,56,55,54,53,51,50,49,49,49,49,71,70,70,72,68,66,65,64,66,64,61,59,58,57,56,54,53,51,50,49,49,49,49,72,71,70,70,68,67,67,66,66,64,62,60,59,58,57,55,53,51,50,49,49,49,49,73,73,72,70,68,67,66,65,66,66,63,61,60,58,57,56,54,52,50,50,50,50,50,73,72,70,70,68,69,67,66,67,68,64,62,61,59,58,56,55,53,51,50,51,51,51,72,71,69,68,68,70,70,68,68,66,64,62,61,60,58,57,55,53,52,52,52,52,52,71,71,69,68,69,72,74,72,68,66,65,64,62,60,59,57,56,55,54,54,53,53,53,71,71,70,69,69,70,71,71,67,66,66,65,63,61,59,58,57,56,55,55,54,54,53,72,72,71,70,69,69,69,69,67,67,67,65,63,61,59,58,57,56,56,55,55,54,54],
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
