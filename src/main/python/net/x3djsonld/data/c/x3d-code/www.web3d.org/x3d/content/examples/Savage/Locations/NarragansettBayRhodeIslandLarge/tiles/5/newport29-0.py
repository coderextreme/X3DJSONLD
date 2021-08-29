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
        texture=ImageTexture(url=['../../images/5/newport29-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.81501095577192,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[202,202,201,202,203,203,202,203,204,203,205,206,207,209,209,210,211,210,210,211,210,210,199,198,197,200,202,203,202,203,204,205,207,208,208,209,212,213,212,212,212,211,210,209,198,197,198,199,204,203,205,208,207,207,210,211,211,212,212,214,214,214,215,214,213,214,195,197,200,203,205,206,208,209,210,210,210,214,215,215,214,215,215,219,219,217,215,215,193,197,200,202,205,206,209,211,212,213,215,214,215,217,217,217,218,218,217,218,215,215,191,195,199,202,204,208,211,212,215,218,216,217,220,218,220,220,219,220,219,219,215,214,189,194,200,203,206,212,214,213,215,219,217,217,220,221,222,222,220,218,221,217,213,212,189,194,198,201,205,210,212,214,215,216,220,221,222,222,221,221,224,221,220,216,213,212,185,192,197,202,203,207,211,215,217,215,220,222,223,225,224,222,223,220,217,214,213,213,184,191,194,199,205,209,213,213,213,217,219,222,225,225,225,225,224,220,220,216,212,212,189,191,193,198,204,207,211,213,215,217,222,224,226,226,228,226,222,223,220,217,212,211,191,192,196,196,203,208,209,213,215,214,219,222,225,226,226,226,225,221,221,219,212,210,182,191,196,200,202,204,207,208,212,217,217,220,220,223,223,223,222,220,219,223,220,220,178,185,196,202,203,205,208,211,214,215,218,221,219,220,222,224,222,223,221,218,220,220,182,189,195,201,204,206,207,210,213,214,218,223,223,225,227,226,224,226,222,220,217,217,188,191,197,202,206,203,207,211,216,221,222,223,226,226,228,230,232,229,224,219,216,216,191,195,200,204,206,208,210,214,220,225,225,225,227,229,228,230,229,232,229,224,219,217,195,199,199,201,205,214,214,216,219,226,227,229,232,231,228,229,227,231,230,227,221,221,195,199,204,207,209,213,217,223,224,225,230,230,231,231,231,231,231,230,229,226,220,219,200,203,207,209,214,216,220,225,225,227,228,231,234,234,232,231,233,233,229,224,222,222,203,207,209,212,215,219,222,224,226,228,231,235,234,236,233,232,230,228,226,225,222,221,209,211,212,216,219,224,227,226,229,228,231,233,236,237,239,238,232,226,226,228,224,223,209,211,216,220,222,226,230,230,232,233,230,233,239,242,244,239,231,229,230,229,228,228,209,211,218,220,222,227,231,231,233,233,230,234,240,244,244,238,231,229,230,229,228,228],
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
