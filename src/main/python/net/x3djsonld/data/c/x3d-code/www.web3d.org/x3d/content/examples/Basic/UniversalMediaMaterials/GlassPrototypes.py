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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='GlassPrototypes.x3d',name='title'),
    meta(content="Prototype declarations defining values for X3D/VRML materials, originally converted from SGI's Open Inventor material examples.",name='description'),
    meta(content='David Roussel',name='creator'),
    meta(content='James Harney, Don Brutzman NPS',name='translator'),
    meta(content='7 April 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://vrmlstuff.free.fr/materials',name='reference'),
    meta(content='Universal Media Material Library',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassPrototypes.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='GlassPrototypes.x3d'),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass00',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.748014,0.62085,0.0),shininess=0.939394,specularColor=(0.860606,0.860606,0.860599),transparency=0.34749)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass01',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.748016,0.555721,0.0),shininess=0.606061,specularColor=(0.836364,0.836364,0.836364),transparency=0.351351)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass02',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.748016,0.299537,0.0),shininess=0.921212,specularColor=(0.836364,0.836364,0.836364),transparency=0.34749)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass03',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.748016,0.139569,0.0),shininess=0.478788,specularColor=(0.709091,0.709091,0.709091),transparency=0.59)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass04',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.748016,0.0,0.040087),shininess=1.0,specularColor=(0.89697,0.89697,0.89697),transparency=0.359073)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass05',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.256,diffuseColor=(0.029158,0.026292,0.026964),shininess=0.030303,specularColor=(0.981818,0.0,0.0),transparency=0.389961)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass06',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.748016,0.006259,0.251931),shininess=0.933333,specularColor=(0.684848,0.684848,0.684848),transparency=0.355212)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass07',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.748016,0.0,0.550351),shininess=0.230303,specularColor=(0.672727,0.672727,0.672727),transparency=0.351351)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass08',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.624368,0.0,0.748016),shininess=0.557576,specularColor=(0.951515,0.951515,0.951515),transparency=0.355212)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass09',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.374008,0.0,0.748016),shininess=0.406061,specularColor=(0.909091,0.909091,0.909091),transparency=0.355212)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass10',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.256,diffuseColor=(0.029158,0.026292,0.026964),shininess=0.061224,specularColor=(0.641609,0.0,0.979592),transparency=0.405405)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass11',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.002317,0.0,0.748016),shininess=0.830303,specularColor=(0.884848,0.884848,0.884848),transparency=0.34749)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass12',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.020732,0.339645,0.748016),shininess=0.927273,specularColor=(0.90303,0.90303,0.90303),transparency=0.362934)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass13',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.0,0.631244,0.748016),shininess=0.642424,specularColor=(0.915152,0.915152,0.915152),transparency=0.389961)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass14',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.248982,diffuseColor=(0.0,0.286882,0.261868),shininess=0.066326,specularColor=(0.243549,0.556863,0.607143),transparency=0.293436)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass15',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.0,0.748016,0.469403),shininess=0.818182,specularColor=(1.0,1.0,1.0),transparency=0.401544)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass16',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.0,0.748016,0.176015),shininess=0.721212,specularColor=(0.981818,0.981818,0.981818),transparency=0.355212)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass17',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.381944,0.748016,0.0),shininess=0.981818,specularColor=(0.963636,0.963636,0.963636),transparency=0.370656)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass18',
      #  computed conversion ambientIntensity=2.018212, normalized to 1.0 
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=1.0,diffuseColor=(0.400769,0.441922,0.459091),shininess=0.127273,specularColor=(0.814672,0.354965,0.310792),transparency=0.243243)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass19',
      #  computed conversion ambientIntensity=2.018212, normalized to 1.0 
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=1.0,diffuseColor=(0.400769,0.441922,0.459091),shininess=0.127273,specularColor=(0.573887,0.649271,0.810811),transparency=0.189189)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass20',
      #  computed conversion ambientIntensity=1.422397, normalized to 1.0 
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=1.0,diffuseColor=(0.481983,0.481084,0.552124),shininess=0.236364,specularColor=(0.833977,0.565944,0.54019),transparency=0.216216)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass21',
      #  computed conversion ambientIntensity=1.001628, normalized to 1.0 
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=1.0,diffuseColor=(0.566681,0.580872,0.580874),shininess=0.168182,specularColor=(0.673937,0.45734,0.436528),transparency=0.351351)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass22',
      #  computed conversion ambientIntensity=2.931317, normalized to 1.0 
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=1.0,diffuseColor=(0.2606,0.28736,0.298524),shininess=0.045454,specularColor=(0.420602,0.431402,0.454545),transparency=0.216216)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass23',
      #  computed conversion ambientIntensity=2.018212, normalized to 1.0 
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=1.0,diffuseColor=(0.400769,0.441922,0.459091),shininess=0.127273,specularColor=(0.420602,0.431402,0.454545),transparency=0.208494)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass24',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.234375,diffuseColor=(0.527894,0.52884,0.553483),shininess=0.854545,specularColor=(0.757704,0.527183,0.490785),transparency=0.285714)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass25',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.256,diffuseColor=(0.372322,0.371574,0.373173),shininess=0.127551,specularColor=(0.890909,0.887832,0.890909),transparency=0.30888)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass26',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.240602,diffuseColor=(0.526888,0.525905,0.603564),shininess=0.636364,specularColor=(0.651092,0.441837,0.42173),transparency=0.285714)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass27',
      #  computed conversion ambientIntensity=2.931317, normalized to 1.0 
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=1.0,diffuseColor=(0.2606,0.28736,0.298524),shininess=0.127273,specularColor=(0.671665,0.688911,0.725869),transparency=0.27027)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass28',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.234375,diffuseColor=(0.566681,0.580872,0.580874),shininess=0.168182,specularColor=(0.610215,0.7546,0.942085),transparency=0.196911)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass29',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.234375,diffuseColor=(0.566681,0.580872,0.580874),shininess=0.072727,specularColor=(0.617761,0.429816,0.40014),transparency=0.235521)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass30',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.249999,diffuseColor=(0.424238,0.424238,0.424238),shininess=0.153696,specularColor=(0.168,0.168,0.168),transparency=0.254826)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass31',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.152381,0.145141,0.15282),shininess=0.957576,specularColor=(0.745455,0.745455,0.745455),transparency=0.254826)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass32',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.138667,0.138667,0.138667),shininess=0.153696,specularColor=(0.168,0.168,0.168),transparency=0.351351)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass33',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),shininess=0.056122,specularColor=(0.918367,0.910614,0.885116),transparency=0.235521)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Glass34',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),shininess=0.557576,specularColor=(1.0,0.991559,0.963793),transparency=0.254826)])),
    Anchor(description='click for examples',parameter=["target=_blank"],url=["GlassExamples.x3d","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassExamples.x3d","GlassExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/GlassExamples.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.8,0.4,0))),
        geometry=Text(string=["GlassExamples.x3d","is a Materials Prototype declaration file.","","For an example scene using these node,","click this text and view","GlassExamples.x3d"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.8)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for GlassPrototypes.py")
