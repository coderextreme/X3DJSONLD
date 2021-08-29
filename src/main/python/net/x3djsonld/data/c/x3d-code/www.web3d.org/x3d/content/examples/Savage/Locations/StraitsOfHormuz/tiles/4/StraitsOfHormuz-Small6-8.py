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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small6-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.1214698558067,56.33160427093061,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[40,3,8,-2,229,280,147,-4,0,0,-5,-19,0,-8,-3,-4,0,0,0,-3,-1,-7,248,21,19,-8,63,360,43,23,2,0,2,-10,-3,-1,2,-15,-4,-2,-1,1,1,-6,259,11,12,4,-1,49,165,40,-2,0,3,-5,0,0,-4,-6,-12,-4,2,7,-6,-4,163,135,8,5,4,1,50,0,-2,-3,0,0,0,-1,21,-3,-20,-19,-9,-12,10,-1,450,73,9,-12,-8,1,-19,0,-5,-5,-3,-4,-7,-6,205,23,107,16,11,2,4,77,334,25,0,-9,-3,2,-6,0,1,-5,-2,8,1,66,312,114,174,223,363,384,262,-9,190,10,4,-4,6,-8,-6,2,5,1,12,16,49,327,456,490,290,294,334,353,262,-3,4,10,10,5,-7,-12,9,105,55,0,-18,24,46,353,534,506,185,140,254,177,31,7,4,9,15,20,17,5,6,149,152,53,25,22,9,290,453,277,48,114,48,113,-34,-1,15,15,21,15,8,13,15,55,78,195,26,31,20,318,412,15,15,24,25,72,-8,-13,231,136,150,54,11,23,3,0,94,301,35,42,63,180,344,99,12,0,-10,14,1,-3,189,407,397,175,39,1,5,2,317,184,38,-2,13,97,244,75,12,6,0,7,10,0,190,177,64,177,13,8,-6,7,68,160,3,3,7,131,169,12,13,1,16,-5,2,7,63,28,5,88,5,-27,2,-2,112,3,1,47,24,117,292,55,15,26,6,13,16,1,6,21,0,1,69,0,1,0,-1,0,31,56,38,238,144,80,12,42,9,-6,63,19,0,0,-3,10,95,32,3,3,10,-3,153,88,88,291,142,41,74,30,10,12,17,164,-2,-4,0,0,138,168,99,8,8,48,18,53,244,339,138,184,22,16,19,35,131,240,63,-4,-2,13,2,48,58,149,171,11,17,42,400,242,336,31,57,18,30,-1,21,127,337,29,-1,3,2,9,0,3,5,3,13,14,563,591,800,30,85,49,228,19,101,26,510,135,4,20,6,-4,2,0,4,4,5,31,435,779,539,342,167,87,508,212,225,30,655,87,6,95,7,2,9,1,3,14,6,53,338,643,351,205,24,524,524,359,54,12,285,158,53,171,7,5,10,2,7,6,13,5,212,550,262,14,24,257,539,542,38,20,278,156,56,173,8,4,11,5,6,5,14,3,212,529,269,18,23,257,540,542,37,21],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])))])
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
