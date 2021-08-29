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
        texture=ImageTexture(url=['../../images/4/Malacca11-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.369293689925194,101.90825043207244,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[526,826,906,396,168,96,102,67,70,75,54,42,35,51,41,61,385,410,59,134,77,48,446,372,613,139,113,126,96,88,85,79,53,43,47,34,59,76,63,211,437,331,66,145,135,543,593,65,83,79,77,83,70,75,61,35,51,70,58,42,37,42,123,67,64,42,211,720,83,70,83,63,54,67,71,60,40,40,70,58,46,45,47,103,170,112,22,67,241,201,83,83,81,80,76,47,53,54,53,49,37,45,32,55,26,213,66,91,159,180,118,99,91,104,93,88,69,62,63,62,47,50,61,45,46,24,38,74,26,117,210,50,356,88,102,99,131,98,352,103,78,50,52,55,48,68,135,44,33,69,128,54,143,177,104,105,109,265,120,103,367,93,80,59,59,42,56,80,128,47,44,479,56,78,111,100,233,113,113,165,289,133,131,77,64,56,68,76,83,63,80,36,716,340,134,190,67,71,173,149,189,565,1453,953,447,65,222,74,50,81,94,69,89,51,399,556,762,117,75,65,138,144,240,1134,1595,1096,264,322,295,70,61,92,71,85,113,71,670,384,100,71,104,83,122,171,503,1180,1240,1158,236,636,246,72,59,46,50,57,81,224,227,114,77,153,294,176,109,255,163,785,1041,410,116,439,314,85,66,66,65,83,76,438,110,140,134,145,543,511,131,140,282,364,275,138,108,125,334,74,56,91,89,87,66,79,112,142,194,315,500,312,112,110,113,126,133,101,103,102,100,90,66,163,375,373,161,101,125,244,227,354,1043,1181,158,139,82,123,177,243,182,69,81,71,193,281,418,421,452,147,508,344,290,269,424,426,186,115,129,113,188,335,86,65,104,70,94,141,308,264,375,374,427,416,295,277,431,339,128,165,117,93,89,189,89,100,112,80,80,142,129,342,353,339,181,627,315,315,381,379,130,97,106,123,93,92,107,141,162,112,73,119,177,107,412,247,333,856,345,567,326,483,118,120,89,112,95,111,143,153,193,84,85,216,295,330,283,270,604,527,571,439,772,822,126,132,124,113,108,125,194,175,386,100,81,215,215,644,520,195,367,426,612,395,833,760,123,139,139,113,106,126,204,183,352,96,83,233,224,671,526,191,331,457,648,429,828,751],
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
