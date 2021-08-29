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
        texture=ImageTexture(url=['../../images/4/Malacca10-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.361918642077449,100.89750038406439,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[0,0,0,0,0,0,2,14,-5,0,4,2,1,1,3,3,1,0,3,4,4,3,0,-1,0,0,0,0,2,-10,15,0,1,4,2,1,2,2,2,4,6,1,3,2,0,-1,0,0,0,5,8,0,0,0,2,1,0,1,2,0,2,1,1,6,0,0,1,0,1,-2,-2,0,1,5,0,0,0,1,3,2,1,3,1,4,1,0,7,30,1,0,0,1,3,3,8,6,-9,0,1,4,3,3,3,3,2,2,3,9,49,42,0,0,2,0,2,0,14,8,5,5,0,3,2,1,2,2,2,3,0,28,55,45,3,1,2,0,0,1,0,0,4,4,1,2,2,2,1,3,3,8,10,11,23,38,2,1,1,2,5,0,1,0,0,1,2,1,2,4,10,10,7,4,41,34,89,80,0,2,1,7,2,8,1,1,0,0,2,2,11,12,18,11,8,85,51,54,82,93,2,0,10,0,7,0,0,2,3,0,2,0,10,10,19,9,12,40,28,64,223,327,2,-1,5,0,0,-2,0,0,1,1,14,8,11,12,8,11,12,44,35,99,70,72,0,4,-1,0,1,0,-2,1,0,8,9,10,8,13,16,11,23,41,62,67,76,52,-10,-2,4,0,0,1,0,1,0,5,4,10,11,13,35,13,31,39,72,54,63,82,-13,-10,-1,0,0,0,0,-2,7,6,6,7,8,14,8,17,53,40,30,80,62,108,-1,-1,-1,0,4,1,1,0,6,3,6,4,11,9,23,134,110,71,34,105,84,90,-1,-1,-1,0,0,0,0,1,0,9,4,5,6,10,36,43,41,133,43,218,151,284,-1,-1,0,1,0,0,0,0,0,10,9,11,36,45,24,30,48,74,368,74,402,335,0,0,0,0,1,1,0,1,0,3,14,9,77,23,47,147,72,48,97,192,115,95,0,0,0,2,0,2,2,2,1,8,12,28,19,41,72,56,43,70,229,257,179,243,0,0,0,1,1,1,1,1,1,6,11,29,57,45,119,127,69,103,113,550,1230,1247,3,1,2,1,2,1,3,3,8,13,9,10,65,49,35,255,254,179,523,517,469,501,1,0,0,0,1,1,1,1,6,12,9,11,51,40,34,296,300,191,607,496,460,526],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])))])
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
