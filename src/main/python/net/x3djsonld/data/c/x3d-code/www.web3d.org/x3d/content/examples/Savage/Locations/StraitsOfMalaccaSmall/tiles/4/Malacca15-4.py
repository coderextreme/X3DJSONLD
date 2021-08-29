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
        texture=ImageTexture(url=['../../images/4/Malacca15-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(5.297423545807372,100.45856257932074,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[1,4,8,28,28,177,301,92,49,25,123,37,32,43,32,32,29,42,43,62,314,534,7,5,6,12,33,66,179,299,221,67,127,34,32,40,34,51,55,55,68,500,367,597,5,6,23,17,23,107,157,131,165,78,44,79,29,42,29,38,61,71,107,446,720,935,4,5,27,17,33,57,106,97,74,236,118,451,39,42,38,46,84,85,100,460,745,886,6,13,34,16,71,150,100,68,82,303,284,299,72,46,37,55,107,100,256,321,695,722,7,28,22,30,38,68,124,74,229,442,640,128,92,55,31,60,118,374,440,251,536,701,8,33,67,98,55,39,47,143,224,500,235,130,68,32,40,50,206,411,379,608,422,661,7,47,135,81,52,33,31,78,418,432,308,168,100,56,53,53,349,355,637,777,679,438,6,15,32,62,31,30,38,47,263,253,398,130,103,64,217,396,476,502,721,674,759,822,6,14,20,42,26,29,57,57,221,189,259,66,63,63,60,56,185,433,728,1126,1096,1143,52,35,14,30,24,23,80,42,57,75,76,69,64,66,47,61,181,210,517,1014,1619,1421,7,13,10,16,22,21,39,30,60,59,54,60,90,52,45,63,359,489,450,716,1549,1664,6,4,13,17,22,16,33,26,36,65,44,70,44,52,48,243,443,545,399,712,1337,1568,3,4,14,15,20,28,35,29,51,29,39,39,42,52,64,74,307,711,710,729,1461,1709,4,6,9,6,8,15,21,23,37,56,33,34,30,47,47,164,386,637,786,749,1149,1463,11,7,14,15,22,13,18,27,22,31,32,44,33,24,47,49,304,679,951,1180,828,1175,17,14,13,14,15,12,20,23,24,27,30,41,29,32,39,69,80,675,642,1111,934,879,7,14,14,14,16,8,16,19,16,43,32,36,23,36,43,36,72,354,767,850,816,648,10,8,11,8,20,12,15,14,20,29,27,20,23,42,41,47,51,150,557,693,666,325,4,3,4,7,13,10,19,17,12,24,20,20,37,43,41,39,71,68,122,278,147,178,6,10,10,22,12,12,16,21,14,16,20,23,31,40,58,63,65,85,123,181,255,78,17,10,28,31,25,13,29,28,22,26,25,31,43,42,49,38,40,72,92,82,91,132,22,9,28,27,27,10,31,23,26,25,29,35,39,45,50,38,43,75,88,95,84,104],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])))])
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
