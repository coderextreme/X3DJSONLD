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
    meta(content='SantaFePrototypes.x3d',name='title'),
    meta(content="Prototype declarations defining values for X3D/VRML materials, originally converted from SGI's Open Inventor material examples.",name='description'),
    meta(content='David Roussel',name='creator'),
    meta(content='James Harney, Don Brutzman NPS',name='translator'),
    meta(content='7 April 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://vrmlstuff.free.fr/materials',name='reference'),
    meta(content='Universal Media Material Library',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SantaFePrototypes.x3d'),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe00',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.255814,diffuseColor=(0.914894,0.444404,0.348914),shininess=0.12766,specularColor=(0.345745,0.143066,0.0))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe01',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.245033,diffuseColor=(0.803191,0.464378,0.490554),shininess=0.026596,specularColor=(0.319149,0.08133,0.08133))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe02',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.254777,diffuseColor=(0.799639,0.326749,0.326749),shininess=0.076531,specularColor=(0.327377,0.135466,0.0))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe03',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.256637,diffuseColor=(0.601064,0.172185,0.212887),shininess=1.0,specularColor=(0.824468,0.227489,0.227489))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe04',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.256637,diffuseColor=(0.601064,0.073945,0.114671),shininess=0.085106,specularColor=(0.425532,0.032158,0.032158))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe05',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.235294,diffuseColor=(0.191499,0.026588,0.066584),shininess=0.058511,specularColor=(0.367348,0.055736,0.055736))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe06',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.259459,diffuseColor=(0.461987,0.484316,0.685837),shininess=0.056995,specularColor=(0.2038,0.253886,0.253886))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe07',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25946,diffuseColor=(0.243598,0.390254,0.442269),shininess=0.031088,specularColor=(0.257869,0.321244,0.321244))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe08',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25946,diffuseColor=(0.340537,0.37498,0.685837),shininess=0.466321,specularColor=(0.237073,0.295337,0.295337))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe09',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.255814,diffuseColor=(0.914894,0.444404,0.348914),shininess=0.12766,specularColor=(0.345745,0.143066,0.0))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe10',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25946,diffuseColor=(0.228655,0.195513,0.425484),shininess=0.542553,specularColor=(0.324504,0.404255,0.404255))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe11',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.259504,diffuseColor=(0.05106,0.241047,0.30737),shininess=0.031915,specularColor=(0.055149,0.08108,0.207447))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe12',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.247423,diffuseColor=(0.130807,0.502591,0.479904),shininess=0.056995,specularColor=(0.330429,0.336788,0.23505))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe13',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.234043,diffuseColor=(0.130133,0.5,0.47743),shininess=0.308511,specularColor=(0.360091,0.367021,0.25615))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe14',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.258929,diffuseColor=(0.359105,0.48895,0.32654),shininess=0.058511,specularColor=(0.218085,0.218085,0.218085))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe15',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.24468,diffuseColor=(0.0,0.413884,0.280316),shininess=0.191489,specularColor=(0.112376,0.390598,0.205359))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe16',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.244898,diffuseColor=(0.016408,0.299131,0.281455),shininess=0.25,specularColor=(0.479592,0.428903,0.403559))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe17',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.253969,diffuseColor=(0.0,0.122449,0.0),shininess=0.081081,specularColor=(0.356628,0.356628,0.356628))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe18',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.251748,diffuseColor=(0.749548,0.601201,0.461629),shininess=0.167568,specularColor=(0.078624,0.080397,0.048423))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe19',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.253333,diffuseColor=(0.449506,0.31044,0.208933),shininess=0.010638,specularColor=(0.180851,0.068473,0.047358))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe20',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.234042,diffuseColor=(0.5,0.243312,0.127417),emissiveColor=(0.015957,0.015957,0.015957),shininess=0.031915,specularColor=(0.276596,0.055086,0.01524))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe21',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.245763,diffuseColor=(0.322063,0.156723,0.082072),shininess=0.031915,specularColor=(0.296891,0.059128,0.016358))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe22',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.245763,diffuseColor=(0.322063,0.156723,0.082072),shininess=0.031915,specularColor=(0.122719,0.036365,0.010061))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe23',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.245763,diffuseColor=(0.34773,0.090909,0.005289),shininess=0.071429,specularColor=(0.336735,0.051091,0.051091))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe24',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.245763,diffuseColor=(0.330514,0.258233,0.211415),shininess=0.02551,specularColor=(0.183673,0.165545,0.163419))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe25',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.248366,diffuseColor=(0.311801,0.204735,0.157819),shininess=0.095745,specularColor=(0.204427,0.102753,0.114546))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe26',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.297422,diffuseColor=(0.501339,0.321021,0.135513),shininess=0.021277,specularColor=(0.079423,0.030071,0.020798))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe27',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.240502,diffuseColor=(0.484043,0.338715,0.035729),shininess=0.085106,specularColor=(0.223676,0.109052,0.033373))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe28',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25641,diffuseColor=(0.795918,0.505869,0.093315),shininess=0.397959,specularColor=(0.923469,0.428866,0.006369))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe29',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.253333,diffuseColor=(0.241185,0.100458,0.100458),shininess=0.037234,specularColor=(0.009161,0.015804,0.108627))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe30',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.253333,diffuseColor=(0.449506,0.374156,0.319157),shininess=0.010638,specularColor=(0.198631,0.032116,0.160295))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe31',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.258928,diffuseColor=(0.335631,0.207672,0.238304),emissiveColor=(0.010638,0.010638,0.010638),shininess=0.021277,specularColor=(0.198631,0.075403,0.138803))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe32',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25641,diffuseColor=(0.381693,0.381693,0.381693),shininess=0.036269,specularColor=(0.039746,0.034181,0.100964))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe33',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.208333,diffuseColor=(0.248705,0.248705,0.248705),shininess=0.098446,specularColor=(0.053032,0.045607,0.134715))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe34',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.208333,diffuseColor=(0.042835,0.042835,0.042835),shininess=0.06383,specularColor=(0.113468,0.109578,0.156265))])),
    Anchor(description='click for examples',parameter=["target=_blank"],url=["SantaFeExamples.x3d","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFeExamples.x3d","SantaFeExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFeExamples.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.8,0.4,0))),
        geometry=Text(string=["SantaFeExamples.x3d","is a Materials Prototype declaration file.","","For an example scene using these node,","click this text and view","SantaFeExamples.x3d"],
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

print ("python x3d.py load successful for SantaFePrototypes.py")
