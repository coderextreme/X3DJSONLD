package org.gradle.accessors.dm;

import org.gradle.api.NonNullApi;
import org.gradle.api.artifacts.MinimalExternalModuleDependency;
import org.gradle.plugin.use.PluginDependency;
import org.gradle.api.artifacts.ExternalModuleDependencyBundle;
import org.gradle.api.artifacts.MutableVersionConstraint;
import org.gradle.api.provider.Provider;
import org.gradle.api.model.ObjectFactory;
import org.gradle.api.provider.ProviderFactory;
import org.gradle.api.internal.catalog.AbstractExternalDependencyFactory;
import org.gradle.api.internal.catalog.DefaultVersionCatalog;
import java.util.Map;
import org.gradle.api.internal.attributes.ImmutableAttributesFactory;
import org.gradle.api.internal.artifacts.dsl.CapabilityNotationParser;
import javax.inject.Inject;

/**
 * A catalog of dependencies accessible via the {@code libs} extension.
 */
@NonNullApi
public class LibrariesForLibs extends AbstractExternalDependencyFactory {

    private final AbstractExternalDependencyFactory owner = this;
    private final NetLibraryAccessors laccForNetLibraryAccessors = new NetLibraryAccessors(owner);
    private final OrgLibraryAccessors laccForOrgLibraryAccessors = new OrgLibraryAccessors(owner);
    private final VersionAccessors vaccForVersionAccessors = new VersionAccessors(providers, config);
    private final BundleAccessors baccForBundleAccessors = new BundleAccessors(objects, providers, config, attributesFactory, capabilityNotationParser);
    private final PluginAccessors paccForPluginAccessors = new PluginAccessors(providers, config);

    @Inject
    public LibrariesForLibs(DefaultVersionCatalog config, ProviderFactory providers, ObjectFactory objects, ImmutableAttributesFactory attributesFactory, CapabilityNotationParser capabilityNotationParser) {
        super(config, providers, objects, attributesFactory, capabilityNotationParser);
    }

    /**
     * Group of libraries at <b>net</b>
     */
    public NetLibraryAccessors getNet() {
        return laccForNetLibraryAccessors;
    }

    /**
     * Group of libraries at <b>org</b>
     */
    public OrgLibraryAccessors getOrg() {
        return laccForOrgLibraryAccessors;
    }

    /**
     * Group of versions at <b>versions</b>
     */
    public VersionAccessors getVersions() {
        return vaccForVersionAccessors;
    }

    /**
     * Group of bundles at <b>bundles</b>
     */
    public BundleAccessors getBundles() {
        return baccForBundleAccessors;
    }

    /**
     * Group of plugins at <b>plugins</b>
     */
    public PluginAccessors getPlugins() {
        return paccForPluginAccessors;
    }

    public static class NetLibraryAccessors extends SubDependencyFactory {
        private final NetSfLibraryAccessors laccForNetSfLibraryAccessors = new NetSfLibraryAccessors(owner);

        public NetLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Group of libraries at <b>net.sf</b>
         */
        public NetSfLibraryAccessors getSf() {
            return laccForNetSfLibraryAccessors;
        }

    }

    public static class NetSfLibraryAccessors extends SubDependencyFactory {
        private final NetSfSaxonLibraryAccessors laccForNetSfSaxonLibraryAccessors = new NetSfSaxonLibraryAccessors(owner);

        public NetSfLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Group of libraries at <b>net.sf.saxon</b>
         */
        public NetSfSaxonLibraryAccessors getSaxon() {
            return laccForNetSfSaxonLibraryAccessors;
        }

    }

    public static class NetSfSaxonLibraryAccessors extends SubDependencyFactory {
        private final NetSfSaxonSaxonLibraryAccessors laccForNetSfSaxonSaxonLibraryAccessors = new NetSfSaxonSaxonLibraryAccessors(owner);

        public NetSfSaxonLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Group of libraries at <b>net.sf.saxon.saxon</b>
         */
        public NetSfSaxonSaxonLibraryAccessors getSaxon() {
            return laccForNetSfSaxonSaxonLibraryAccessors;
        }

    }

    public static class NetSfSaxonSaxonLibraryAccessors extends SubDependencyFactory {

        public NetSfSaxonSaxonLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Dependency provider for <b>he</b> with <b>net.sf.saxon:Saxon-HE</b> coordinates and
         * with version reference <b>net.sf.saxon.saxon.he</b>
         * <p>
         * This dependency was declared in catalog libs.versions.toml
         */
        public Provider<MinimalExternalModuleDependency> getHe() {
            return create("net.sf.saxon.saxon.he");
        }

    }

    public static class OrgLibraryAccessors extends SubDependencyFactory {
        private final OrgApacheLibraryAccessors laccForOrgApacheLibraryAccessors = new OrgApacheLibraryAccessors(owner);
        private final OrgGlassfishLibraryAccessors laccForOrgGlassfishLibraryAccessors = new OrgGlassfishLibraryAccessors(owner);
        private final OrgGraalvmLibraryAccessors laccForOrgGraalvmLibraryAccessors = new OrgGraalvmLibraryAccessors(owner);
        private final OrgSlf4jLibraryAccessors laccForOrgSlf4jLibraryAccessors = new OrgSlf4jLibraryAccessors(owner);
        private final OrgWeb3dLibraryAccessors laccForOrgWeb3dLibraryAccessors = new OrgWeb3dLibraryAccessors(owner);

        public OrgLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Group of libraries at <b>org.apache</b>
         */
        public OrgApacheLibraryAccessors getApache() {
            return laccForOrgApacheLibraryAccessors;
        }

        /**
         * Group of libraries at <b>org.glassfish</b>
         */
        public OrgGlassfishLibraryAccessors getGlassfish() {
            return laccForOrgGlassfishLibraryAccessors;
        }

        /**
         * Group of libraries at <b>org.graalvm</b>
         */
        public OrgGraalvmLibraryAccessors getGraalvm() {
            return laccForOrgGraalvmLibraryAccessors;
        }

        /**
         * Group of libraries at <b>org.slf4j</b>
         */
        public OrgSlf4jLibraryAccessors getSlf4j() {
            return laccForOrgSlf4jLibraryAccessors;
        }

        /**
         * Group of libraries at <b>org.web3d</b>
         */
        public OrgWeb3dLibraryAccessors getWeb3d() {
            return laccForOrgWeb3dLibraryAccessors;
        }

    }

    public static class OrgApacheLibraryAccessors extends SubDependencyFactory {
        private final OrgApacheCommonsLibraryAccessors laccForOrgApacheCommonsLibraryAccessors = new OrgApacheCommonsLibraryAccessors(owner);

        public OrgApacheLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Group of libraries at <b>org.apache.commons</b>
         */
        public OrgApacheCommonsLibraryAccessors getCommons() {
            return laccForOrgApacheCommonsLibraryAccessors;
        }

    }

    public static class OrgApacheCommonsLibraryAccessors extends SubDependencyFactory {
        private final OrgApacheCommonsCommonsLibraryAccessors laccForOrgApacheCommonsCommonsLibraryAccessors = new OrgApacheCommonsCommonsLibraryAccessors(owner);

        public OrgApacheCommonsLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Group of libraries at <b>org.apache.commons.commons</b>
         */
        public OrgApacheCommonsCommonsLibraryAccessors getCommons() {
            return laccForOrgApacheCommonsCommonsLibraryAccessors;
        }

    }

    public static class OrgApacheCommonsCommonsLibraryAccessors extends SubDependencyFactory {

        public OrgApacheCommonsCommonsLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Dependency provider for <b>lang3</b> with <b>org.apache.commons:commons-lang3</b> coordinates and
         * with version reference <b>org.apache.commons.commons.lang3</b>
         * <p>
         * This dependency was declared in catalog libs.versions.toml
         */
        public Provider<MinimalExternalModuleDependency> getLang3() {
            return create("org.apache.commons.commons.lang3");
        }

    }

    public static class OrgGlassfishLibraryAccessors extends SubDependencyFactory {
        private final OrgGlassfishJavaxLibraryAccessors laccForOrgGlassfishJavaxLibraryAccessors = new OrgGlassfishJavaxLibraryAccessors(owner);

        public OrgGlassfishLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Group of libraries at <b>org.glassfish.javax</b>
         */
        public OrgGlassfishJavaxLibraryAccessors getJavax() {
            return laccForOrgGlassfishJavaxLibraryAccessors;
        }

    }

    public static class OrgGlassfishJavaxLibraryAccessors extends SubDependencyFactory {

        public OrgGlassfishJavaxLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Dependency provider for <b>json</b> with <b>org.glassfish:javax.json</b> coordinates and
         * with version reference <b>org.glassfish.javax.json</b>
         * <p>
         * This dependency was declared in catalog libs.versions.toml
         */
        public Provider<MinimalExternalModuleDependency> getJson() {
            return create("org.glassfish.javax.json");
        }

    }

    public static class OrgGraalvmLibraryAccessors extends SubDependencyFactory {
        private final OrgGraalvmJsLibraryAccessors laccForOrgGraalvmJsLibraryAccessors = new OrgGraalvmJsLibraryAccessors(owner);
        private final OrgGraalvmPolyglotLibraryAccessors laccForOrgGraalvmPolyglotLibraryAccessors = new OrgGraalvmPolyglotLibraryAccessors(owner);

        public OrgGraalvmLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Group of libraries at <b>org.graalvm.js</b>
         */
        public OrgGraalvmJsLibraryAccessors getJs() {
            return laccForOrgGraalvmJsLibraryAccessors;
        }

        /**
         * Group of libraries at <b>org.graalvm.polyglot</b>
         */
        public OrgGraalvmPolyglotLibraryAccessors getPolyglot() {
            return laccForOrgGraalvmPolyglotLibraryAccessors;
        }

    }

    public static class OrgGraalvmJsLibraryAccessors extends SubDependencyFactory {

        public OrgGraalvmJsLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Dependency provider for <b>js</b> with <b>org.graalvm.js:js</b> coordinates and
         * with version reference <b>org.graalvm.js.js</b>
         * <p>
         * This dependency was declared in catalog libs.versions.toml
         */
        public Provider<MinimalExternalModuleDependency> getJs() {
            return create("org.graalvm.js.js");
        }

    }

    public static class OrgGraalvmPolyglotLibraryAccessors extends SubDependencyFactory {
        private final OrgGraalvmPolyglotJsLibraryAccessors laccForOrgGraalvmPolyglotJsLibraryAccessors = new OrgGraalvmPolyglotJsLibraryAccessors(owner);

        public OrgGraalvmPolyglotLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Group of libraries at <b>org.graalvm.polyglot.js</b>
         */
        public OrgGraalvmPolyglotJsLibraryAccessors getJs() {
            return laccForOrgGraalvmPolyglotJsLibraryAccessors;
        }

    }

    public static class OrgGraalvmPolyglotJsLibraryAccessors extends SubDependencyFactory {

        public OrgGraalvmPolyglotJsLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Dependency provider for <b>community</b> with <b>org.graalvm.polyglot:js-community</b> coordinates and
         * with version reference <b>org.graalvm.polyglot.js.community</b>
         * <p>
         * This dependency was declared in catalog libs.versions.toml
         */
        public Provider<MinimalExternalModuleDependency> getCommunity() {
            return create("org.graalvm.polyglot.js.community");
        }

    }

    public static class OrgSlf4jLibraryAccessors extends SubDependencyFactory {
        private final OrgSlf4jSlf4jLibraryAccessors laccForOrgSlf4jSlf4jLibraryAccessors = new OrgSlf4jSlf4jLibraryAccessors(owner);

        public OrgSlf4jLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Group of libraries at <b>org.slf4j.slf4j</b>
         */
        public OrgSlf4jSlf4jLibraryAccessors getSlf4j() {
            return laccForOrgSlf4jSlf4jLibraryAccessors;
        }

    }

    public static class OrgSlf4jSlf4jLibraryAccessors extends SubDependencyFactory {

        public OrgSlf4jSlf4jLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Dependency provider for <b>log4j12</b> with <b>org.slf4j:slf4j-log4j12</b> coordinates and
         * with version reference <b>org.slf4j.slf4j.log4j12</b>
         * <p>
         * This dependency was declared in catalog libs.versions.toml
         */
        public Provider<MinimalExternalModuleDependency> getLog4j12() {
            return create("org.slf4j.slf4j.log4j12");
        }

    }

    public static class OrgWeb3dLibraryAccessors extends SubDependencyFactory {
        private final OrgWeb3dX3dLibraryAccessors laccForOrgWeb3dX3dLibraryAccessors = new OrgWeb3dX3dLibraryAccessors(owner);

        public OrgWeb3dLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Group of libraries at <b>org.web3d.x3d</b>
         */
        public OrgWeb3dX3dLibraryAccessors getX3d() {
            return laccForOrgWeb3dX3dLibraryAccessors;
        }

    }

    public static class OrgWeb3dX3dLibraryAccessors extends SubDependencyFactory {

        public OrgWeb3dX3dLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Dependency provider for <b>x3djsail</b> with <b>org.web3d.x3d:X3DJSAIL</b> coordinates and
         * with version reference <b>org.web3d.x3d.x3djsail</b>
         * <p>
         * This dependency was declared in catalog libs.versions.toml
         */
        public Provider<MinimalExternalModuleDependency> getX3djsail() {
            return create("org.web3d.x3d.x3djsail");
        }

    }

    public static class VersionAccessors extends VersionFactory  {

        private final NetVersionAccessors vaccForNetVersionAccessors = new NetVersionAccessors(providers, config);
        private final OrgVersionAccessors vaccForOrgVersionAccessors = new OrgVersionAccessors(providers, config);
        public VersionAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Group of versions at <b>versions.net</b>
         */
        public NetVersionAccessors getNet() {
            return vaccForNetVersionAccessors;
        }

        /**
         * Group of versions at <b>versions.org</b>
         */
        public OrgVersionAccessors getOrg() {
            return vaccForOrgVersionAccessors;
        }

    }

    public static class NetVersionAccessors extends VersionFactory  {

        private final NetSfVersionAccessors vaccForNetSfVersionAccessors = new NetSfVersionAccessors(providers, config);
        public NetVersionAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Group of versions at <b>versions.net.sf</b>
         */
        public NetSfVersionAccessors getSf() {
            return vaccForNetSfVersionAccessors;
        }

    }

    public static class NetSfVersionAccessors extends VersionFactory  {

        private final NetSfSaxonVersionAccessors vaccForNetSfSaxonVersionAccessors = new NetSfSaxonVersionAccessors(providers, config);
        public NetSfVersionAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Group of versions at <b>versions.net.sf.saxon</b>
         */
        public NetSfSaxonVersionAccessors getSaxon() {
            return vaccForNetSfSaxonVersionAccessors;
        }

    }

    public static class NetSfSaxonVersionAccessors extends VersionFactory  {

        private final NetSfSaxonSaxonVersionAccessors vaccForNetSfSaxonSaxonVersionAccessors = new NetSfSaxonSaxonVersionAccessors(providers, config);
        public NetSfSaxonVersionAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Group of versions at <b>versions.net.sf.saxon.saxon</b>
         */
        public NetSfSaxonSaxonVersionAccessors getSaxon() {
            return vaccForNetSfSaxonSaxonVersionAccessors;
        }

    }

    public static class NetSfSaxonSaxonVersionAccessors extends VersionFactory  {

        public NetSfSaxonSaxonVersionAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Version alias <b>net.sf.saxon.saxon.he</b> with value <b>10.6</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog libs.versions.toml
         */
        public Provider<String> getHe() { return getVersion("net.sf.saxon.saxon.he"); }

    }

    public static class OrgVersionAccessors extends VersionFactory  {

        private final OrgApacheVersionAccessors vaccForOrgApacheVersionAccessors = new OrgApacheVersionAccessors(providers, config);
        private final OrgGlassfishVersionAccessors vaccForOrgGlassfishVersionAccessors = new OrgGlassfishVersionAccessors(providers, config);
        private final OrgGraalvmVersionAccessors vaccForOrgGraalvmVersionAccessors = new OrgGraalvmVersionAccessors(providers, config);
        private final OrgSlf4jVersionAccessors vaccForOrgSlf4jVersionAccessors = new OrgSlf4jVersionAccessors(providers, config);
        private final OrgWeb3dVersionAccessors vaccForOrgWeb3dVersionAccessors = new OrgWeb3dVersionAccessors(providers, config);
        public OrgVersionAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Group of versions at <b>versions.org.apache</b>
         */
        public OrgApacheVersionAccessors getApache() {
            return vaccForOrgApacheVersionAccessors;
        }

        /**
         * Group of versions at <b>versions.org.glassfish</b>
         */
        public OrgGlassfishVersionAccessors getGlassfish() {
            return vaccForOrgGlassfishVersionAccessors;
        }

        /**
         * Group of versions at <b>versions.org.graalvm</b>
         */
        public OrgGraalvmVersionAccessors getGraalvm() {
            return vaccForOrgGraalvmVersionAccessors;
        }

        /**
         * Group of versions at <b>versions.org.slf4j</b>
         */
        public OrgSlf4jVersionAccessors getSlf4j() {
            return vaccForOrgSlf4jVersionAccessors;
        }

        /**
         * Group of versions at <b>versions.org.web3d</b>
         */
        public OrgWeb3dVersionAccessors getWeb3d() {
            return vaccForOrgWeb3dVersionAccessors;
        }

    }

    public static class OrgApacheVersionAccessors extends VersionFactory  {

        private final OrgApacheCommonsVersionAccessors vaccForOrgApacheCommonsVersionAccessors = new OrgApacheCommonsVersionAccessors(providers, config);
        public OrgApacheVersionAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Group of versions at <b>versions.org.apache.commons</b>
         */
        public OrgApacheCommonsVersionAccessors getCommons() {
            return vaccForOrgApacheCommonsVersionAccessors;
        }

    }

    public static class OrgApacheCommonsVersionAccessors extends VersionFactory  {

        private final OrgApacheCommonsCommonsVersionAccessors vaccForOrgApacheCommonsCommonsVersionAccessors = new OrgApacheCommonsCommonsVersionAccessors(providers, config);
        public OrgApacheCommonsVersionAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Group of versions at <b>versions.org.apache.commons.commons</b>
         */
        public OrgApacheCommonsCommonsVersionAccessors getCommons() {
            return vaccForOrgApacheCommonsCommonsVersionAccessors;
        }

    }

    public static class OrgApacheCommonsCommonsVersionAccessors extends VersionFactory  {

        public OrgApacheCommonsCommonsVersionAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Version alias <b>org.apache.commons.commons.lang3</b> with value <b>3.4</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog libs.versions.toml
         */
        public Provider<String> getLang3() { return getVersion("org.apache.commons.commons.lang3"); }

    }

    public static class OrgGlassfishVersionAccessors extends VersionFactory  {

        private final OrgGlassfishJavaxVersionAccessors vaccForOrgGlassfishJavaxVersionAccessors = new OrgGlassfishJavaxVersionAccessors(providers, config);
        public OrgGlassfishVersionAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Group of versions at <b>versions.org.glassfish.javax</b>
         */
        public OrgGlassfishJavaxVersionAccessors getJavax() {
            return vaccForOrgGlassfishJavaxVersionAccessors;
        }

    }

    public static class OrgGlassfishJavaxVersionAccessors extends VersionFactory  {

        public OrgGlassfishJavaxVersionAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Version alias <b>org.glassfish.javax.json</b> with value <b>1.0.4</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog libs.versions.toml
         */
        public Provider<String> getJson() { return getVersion("org.glassfish.javax.json"); }

    }

    public static class OrgGraalvmVersionAccessors extends VersionFactory  {

        private final OrgGraalvmJsVersionAccessors vaccForOrgGraalvmJsVersionAccessors = new OrgGraalvmJsVersionAccessors(providers, config);
        private final OrgGraalvmPolyglotVersionAccessors vaccForOrgGraalvmPolyglotVersionAccessors = new OrgGraalvmPolyglotVersionAccessors(providers, config);
        public OrgGraalvmVersionAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Group of versions at <b>versions.org.graalvm.js</b>
         */
        public OrgGraalvmJsVersionAccessors getJs() {
            return vaccForOrgGraalvmJsVersionAccessors;
        }

        /**
         * Group of versions at <b>versions.org.graalvm.polyglot</b>
         */
        public OrgGraalvmPolyglotVersionAccessors getPolyglot() {
            return vaccForOrgGraalvmPolyglotVersionAccessors;
        }

    }

    public static class OrgGraalvmJsVersionAccessors extends VersionFactory  {

        public OrgGraalvmJsVersionAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Version alias <b>org.graalvm.js.js</b> with value <b>20.2.0</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog libs.versions.toml
         */
        public Provider<String> getJs() { return getVersion("org.graalvm.js.js"); }

    }

    public static class OrgGraalvmPolyglotVersionAccessors extends VersionFactory  {

        private final OrgGraalvmPolyglotJsVersionAccessors vaccForOrgGraalvmPolyglotJsVersionAccessors = new OrgGraalvmPolyglotJsVersionAccessors(providers, config);
        public OrgGraalvmPolyglotVersionAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Group of versions at <b>versions.org.graalvm.polyglot.js</b>
         */
        public OrgGraalvmPolyglotJsVersionAccessors getJs() {
            return vaccForOrgGraalvmPolyglotJsVersionAccessors;
        }

    }

    public static class OrgGraalvmPolyglotJsVersionAccessors extends VersionFactory  {

        public OrgGraalvmPolyglotJsVersionAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Version alias <b>org.graalvm.polyglot.js.community</b> with value <b>24.0.0</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog libs.versions.toml
         */
        public Provider<String> getCommunity() { return getVersion("org.graalvm.polyglot.js.community"); }

    }

    public static class OrgSlf4jVersionAccessors extends VersionFactory  {

        private final OrgSlf4jSlf4jVersionAccessors vaccForOrgSlf4jSlf4jVersionAccessors = new OrgSlf4jSlf4jVersionAccessors(providers, config);
        public OrgSlf4jVersionAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Group of versions at <b>versions.org.slf4j.slf4j</b>
         */
        public OrgSlf4jSlf4jVersionAccessors getSlf4j() {
            return vaccForOrgSlf4jSlf4jVersionAccessors;
        }

    }

    public static class OrgSlf4jSlf4jVersionAccessors extends VersionFactory  {

        public OrgSlf4jSlf4jVersionAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Version alias <b>org.slf4j.slf4j.log4j12</b> with value <b>1.7.12</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog libs.versions.toml
         */
        public Provider<String> getLog4j12() { return getVersion("org.slf4j.slf4j.log4j12"); }

    }

    public static class OrgWeb3dVersionAccessors extends VersionFactory  {

        private final OrgWeb3dX3dVersionAccessors vaccForOrgWeb3dX3dVersionAccessors = new OrgWeb3dX3dVersionAccessors(providers, config);
        public OrgWeb3dVersionAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Group of versions at <b>versions.org.web3d.x3d</b>
         */
        public OrgWeb3dX3dVersionAccessors getX3d() {
            return vaccForOrgWeb3dX3dVersionAccessors;
        }

    }

    public static class OrgWeb3dX3dVersionAccessors extends VersionFactory  {

        public OrgWeb3dX3dVersionAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Version alias <b>org.web3d.x3d.x3djsail</b> with value <b>4.0.full</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog libs.versions.toml
         */
        public Provider<String> getX3djsail() { return getVersion("org.web3d.x3d.x3djsail"); }

    }

    public static class BundleAccessors extends BundleFactory {

        public BundleAccessors(ObjectFactory objects, ProviderFactory providers, DefaultVersionCatalog config, ImmutableAttributesFactory attributesFactory, CapabilityNotationParser capabilityNotationParser) { super(objects, providers, config, attributesFactory, capabilityNotationParser); }

    }

    public static class PluginAccessors extends PluginFactory {

        public PluginAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

    }

}
