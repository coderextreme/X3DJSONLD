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
    GeoLOD(center=(41.86339110810791,-71.7692354927566,0.0),range=6150.5674,child1Url=['../../tiles/5/newport30-0.x3d'],child2Url=['../../tiles/5/newport30-1.x3d'],child3Url=['../../tiles/5/newport31-0.x3d'],child4Url=['../../tiles/5/newport31-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport15-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[187,194,204,213,215,220,225,229,222,218,214,208,203,207,209,208,197,187,179,176,177,176,184,196,202,207,213,217,221,223,222,219,218,210,211,213,217,211,202,190,187,183,175,174,182,195,204,207,213,218,223,227,224,222,217,213,215,212,215,213,207,197,193,187,177,173,192,200,205,210,220,225,227,228,228,230,219,213,211,212,211,210,206,195,191,184,173,171,196,205,211,217,224,230,232,231,231,230,221,215,209,209,205,203,198,192,184,174,169,169,207,212,218,223,227,232,231,236,232,225,223,220,215,208,198,195,193,189,174,166,168,167,212,220,224,232,233,233,241,243,233,233,228,221,215,206,200,196,191,180,170,172,163,162,215,220,232,230,238,242,242,241,237,232,226,218,209,201,197,192,184,176,168,171,165,164,225,235,234,237,236,244,241,240,241,238,229,218,209,206,196,185,183,174,178,177,168,166,223,231,235,242,246,242,238,236,241,244,232,218,207,200,191,185,184,188,182,179,173,171,215,228,241,245,245,239,240,244,242,231,224,217,211,194,189,191,197,189,182,177,176,172,221,231,236,242,239,242,243,244,238,232,225,212,204,194,191,197,197,192,182,178,170,170,222,232,232,232,236,241,248,249,241,230,215,212,204,193,191,202,210,196,184,178,172,173,223,219,224,233,237,246,254,249,235,225,220,215,203,201,207,218,212,199,188,181,180,179,207,216,219,228,237,248,251,242,231,222,221,211,206,208,220,220,216,200,191,185,182,180,209,211,219,230,240,250,251,239,229,222,217,215,212,220,225,221,218,207,193,188,183,182,206,211,222,231,247,245,239,227,222,220,215,216,211,223,226,226,216,207,197,191,189,188,200,209,221,226,236,235,231,225,214,215,217,211,223,227,229,224,221,207,193,194,189,188,191,197,204,215,218,219,217,215,216,220,223,221,227,233,231,223,223,209,200,189,188,187,178,192,193,198,203,203,210,212,219,225,231,235,236,233,232,234,222,218,207,198,193,191,189,193,191,190,191,194,203,215,226,234,235,239,241,241,237,237,235,230,216,207,199,200,190,194,191,190,190,194,202,216,227,235,234,239,242,241,237,237,237,231,217,207,199,200],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
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
